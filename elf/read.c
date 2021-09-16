#include<stdio.h>
#include<unistd.h>
#include<stdint.h>
#include<stdlib.h>
#include<elf.h>

int main(int argc,char **argv)
{
	FILE* Elffile = NULL;
	char* SectNames = NULL;
	Elf64_Ehdr elfHdr;
	Elf64_Shdr sectHdr;
	uint32_t idx;

	if(argc != 2){
		printf("usage: %s <ELF_FILE>\n",argv[0]);
		exit(1);
	}
	if((Elffile = fopen(argv[1], "r")) == NULL) {
		perror("[E] Error opening file:");
		exit(1);
	}
	/* read elf header first thing in file */
	fread(&elfHdr,1 , sizeof(Elf64_Ehdr),Elffile);

	fseek(Elffile,elfHdr.e_shoff + elfHdr.e_shstrndx * sizeof(sectHdr), SEEK_SET);
	fread(&sectHdr, 1, sizeof(sectHdr), Elffile);

	SectNames = malloc(sectHdr.sh_size);
	fseek(Elffile, sectHdr.sh_offset,SEEK_SET);
	fread(SectNames, 1 ,sectHdr.sh_size,Elffile);

	/* read all section headers */
	for (idx = 0; idx < elfHdr.e_shnum; idx++)
	{
		const char* name = "";

		fseek(Elffile, elfHdr.e_shoff + idx * sizeof (sectHdr), SEEK_SET);
		fread(&sectHdr, 1, sizeof(sectHdr), Elffile);

	/* print section names */
	if (sectHdr.sh_name);
	name = SectNames + sectHdr.sh_name;
	printf("%2u %s\n", idx, name);
	}
	return 0;
}

