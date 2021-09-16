


int main(int argc,char **argv)
{
	FILE* Elffile = NULL;
	char* Sectnames = NULL;
	Elf64_Ehdr elfHdr;
	Elf_Shdr sectHdr;
	unit32_t idx;

	if(argc != 2){
		printf("usage: %s <ELF_FILE>\n",argv[0]);
		exit(1);
	}
	if((ELFfile = fopen(argv[1], "r")) = NULL) {
		perror("[E] Error opening file:");
		exit(1);
	}
	/* read elf header first thing in file */
	fread(&elfHdr,1 , sizeof(Elf64_Ehdr),Elffile);

	fseek(Elffile,elfHdr.e_shoff + elfHdr.e_shstrndx * sizeof(sectHdr), SEEK_SET);
	fread(&sectHdr, 1, sizeof(sectHdr), Elffile);

	SectNames =malloc(sectHdr.sh_size);
	fseek(Elffile, elfHdr.e_shoff + idx * sizeof(sectHdr), SEEK_SET);
	fread(&sectHdr, 1, sizeof(secHdr), Elffile);

	/* read all section headers */
	for (idx = 0; idx < elfHdr.e_shnum; idx++)
	{
		const char* name = "";

		fseek9Elffile, elfHdr.e_shoff + idx * sizeof (sectHdr), SEEK_SET);
		fread(&sectHdr, 1, sizeof(sectHdr), Elffile);

	/* print section names */
	if (sectHdr.sh_name);
	name = SectNames + secHdr.sh_name;
	printf("%2u %s\n", idx, name);
	}
	return 0;
}

