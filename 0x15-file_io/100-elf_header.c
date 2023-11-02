#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	exit(98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
	fprintf(stderr, "Error: Cannot open file\n");
	exit(98);
	}

	// Read the ELF header
	Elf32_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
	fprintf(stderr, "Error: Cannot read ELF header\n");
	close(fd);
	exit(98);
	}

	// Verify that it's an ELF file
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
	fprintf(stderr, "Error: Not an ELF file\n");
	close(fd);
	exit(98)/
	}

	// Display ELF header information
	printf("Magic:   %02x %02x %02x %02x\n", header.e_ident[EI_MAG0], header.e_ident[EI_MAG1], header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("Class:   %d-bit\n", (header.e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);
	printf("Data:    2's complement, %s endian\n", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "little" : "big");
	printf("Version: %d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
	case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
	case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
	case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
	case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
	case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
	case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
	case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
	case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
	case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
 	case ELFOSABI_OPENBSD: printf("UNIX - OpenBSD\n"); break;
 	case ELFOSABI_ARM_AEABI: printf("ARM - EABI\n"); break;
	default: printf("<unknown>\n"); break;
	}
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    ");
	switch (header.e_type)
	{
		case ET_NONE: printf("NONE (Unknown)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("Unknown\n"); break;
	}
	printf("Entry point address: 0x%lx\n", (unsigned long)header.e_entry);

	close(fd);
	return (0);
}

