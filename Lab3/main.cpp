#include <stdio.h>
#include <string.h>


using namespace std;

int main(int argc, char *argv[]) {
    int v = 0;
    int l = 0;
    int h = 0;
    int vh = 0;
    int vl = 0;
    int lh = 0;
    if(argc <=1){
        printf("%s","You should use: \n\t./cmake-lab3\n\t\t-v(--version)\n\t\t-l(--list)\n\t\t-h(--help)");
    }else{
        int number = argc-1;
        printf("%s%d%s", "\nYou wrote : ", (number), "  arguments\n");
        int count = argc;
        for(int i = 0; i < count-1;i++){
            printf("%d%s%s%s", (i+1), " argument is: ", argv[i+1],"\n");
        }
        printf("Checking your arguments...\n");
        char *vstr;
        char *lstr;
        char *hstr;
        for(int i = 1; i < count;i++){
            if(!strcmp(argv[i], "-v") || !strcmp(argv[i], "--version")){
                v = v + 1;
            }else if(!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help")){
                h = h + 1;
            }else if(!strcmp(argv[i], "-l") || !strcmp(argv[i], "--list")){
                l = l + 1;
            }else if(!strcmp(argv[i], "-vh") || !strcmp(argv[i], "-hv")){
                v = v + 1;
                h = h + 1;
            }else if(!strcmp(argv[i], "-lh") || !strcmp(argv[i], "-hl")){
                l = l + 1;
                h = h + 1;
            }else if(!strcmp(argv[i], "-vl") || !strcmp(argv[i], "-lv")){
                l = l + 1;
                v = v + 1;
            }else{
                printf("%s","You should use: \n\t./cmake-lab3\n\t\t-v(--version)\n\t\t-l(--list)\n\t\t-h(--help)\n");
            }
        }  
        char *list[] = {"false","false","false"};
        if(v >= 2){
            printf("Probably you tried to use two forms: -v and --version\n\n");
            list[0] = "true";
        }if(h >= 2){
            printf("Probably you tried to use two forms: -h and --help\n\n");
            list[1] = "true";
        }if(l >= 2){
            printf("Probably you tried to use two forms: -l and --list\n\n");
            list[2] = "true";
        }
        printf("Second used --version : %s\n", list[0]);
        printf("Second used --help : %s\n", list[1]);
        printf("Second used --list : %s\n\n", list[2]);
        if(v >= 1){
            printf("ARG: Version\n\n");
        }
        if(l >= 1){
            printf("ARG: List\n\n");
        }
        if(h >= 1){
            printf("ARG: Help\n\n");
        }
   }
}