//bool *tmptr;
bool tmpVal=true;
//tmptr=&tmpVal;
int curthreshold=0;
int tmpthreshhols=0;

while(){
bool isBigger = true;
tmpVal=true;

for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){

   if(matArr(i,j)!=ZERO){
    for(int k = 0; k < NUMSIZE; k++){
     if(arr4D[i][j][0][k]>-1 && arr4D[i][j][1][k]>-1 && arr4D[i][j][0][k]<rows && arr4D[i][j][1][k]<cols){
       if(*(visBool(arr4D[i][j][0][k],arr4D[i][j][1][k]))==true&&matArr(arr4D[i][j][1][k],arr4D[i][j][1][k])!=0&&!*visBool(i,j)){
               if( matArr(i,j) > matArr(arr4D[i][j][0][k],arr4D[i][j][1][k])) {
                    isBigger = false;

                }
              
              //tmptr=&tmpVal;
             if(matArr(i,j)>= matArr(arr4D[i][j][0][k],arr4D[i][j][1][k])+1){
                tmpVal=false;
                visBool(i,j) = &tmpVal;
                matArr(i,j)=min((matArr(arr4D[i][j][0][k],arr4D[i][j][1][k])+1), 254);
                curthreshold=matArr(i,j);
                }
            // if(maxVal<=matArr(i,j){
                  //     maxVal=matArr(i,j);

                  //  }
                
          
         }
       }
     }

      if(isBigger) {
        markers(arr4D[i][j][0][k],arr4D[i][j][1][k])=2;
       }


      }
    }
    
  }

 if(){


 }

}
