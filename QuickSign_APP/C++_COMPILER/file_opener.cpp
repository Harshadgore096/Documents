#include <bits/stdc++.h>
using namespace std;
 int main(int argc, int** argv )
{
   char* fileopen=argv[1];
    FILE *fp;
    fp=fopen("text.cpp","r");

    if(fp==NULL)
    {
        cout<<"File is Not Found";
        exit(1);
    }
    else{
      fseek(fp,0,SEEK_END);
      int fsize=ftell(fp);
      fseek(fp,0,SEEK_SET);
      char* buffer=NULL;
      buffer=new(nothrow) char[fsize+1];
      if(!buffer)
      {
    fread(buffer , sizeof(char),fsize,fp);
    scanner(buffer);
      }
      delete buffer;
      fclose(fp);
    }
}