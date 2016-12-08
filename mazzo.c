void mescola(carta_t *ptom) {
  int i=0; //miscellanee
  int frequenze[C] = {5,3,3,4,2,1,9,8,4,1,4,3,2,5,4,3,3,3,5};
  int cas;
  
  FILE *fp;
  fp=fopen ("mazzo.txt","r"); //popolamento array doppioni con lettura da file

  srand(time(NULL));
  while (i<M) {
    do {
      cas=rand()%C;
    }
    while (frequenze[cas]==0); //randomizza ordine carte e genera array
    rewind(fp);
    fseek(*fp,11*sizeof(char)*cas,SEEK_CUR);
    fscanf("%c %c %c %c %d \n",ptom[i].lati[0],ptom[i].lati[1],ptom[i].lati[2],ptom[i].lati[3],ptom[i].campus);
    ptom[i].wifi=rand()%2;
    frequenze[cas]--;
    i++;
  }
  fclose(fp);
}


