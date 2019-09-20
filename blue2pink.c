#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
	char const* const fileName = argv[1];
	FILE * file = fopen(fileName,"r+");
	fpos_t startln;
	char line[1024];
	int changed = 0;
	fgetpos(file, &startln);
	while (fgets(line, sizeof(line), file)){
		if (!changed && strcmp(line,"blue\n")==0){
			fsetpos(file, &startln);
			fputs("pink", file);
			changed = 1;
		}
		fgetpos(file, &startln);
	}

	fclose(file);

	return 0;
}
