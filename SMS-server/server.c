#include "header.h"

int main(int argc, char *argv[]){
	int i;
   if (argc!=1) // ver se foi iniciado com algum argumento
  {
  	if(strcmp(argv[1],"adduser")==0){
      DBreader();
  		addUser(argv[2]);      
    }
  }
  else{
   //char command[50];
   //strcpy( command, "clear" );
    system("clear");
    onlineLogreset();
    DBreader();
    //puts("falhou");
    startServer();


  }

  return 0;
}


