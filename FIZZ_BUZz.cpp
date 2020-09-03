#include<iostream>
    
    int multi(int x, int y);
     int main(){
         std::cout<<"The multiplying function \n";
         int x,y,z;
         std::cout<<"input the value of x and y: \n";
         std::cin>>x>>y;
         z = multi(x,y);
         std::cout<<"the no you wish is: "<<z<<std::endl;
         return 0;
        }

     
     int multi(int x, int y){
         return x*y;
     }

    
