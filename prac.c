#include <stdio.h>
void main()
{
  //initializing the cities
  char* c[]={"Delhi","Mumbai","Chennai".};

  //initializing the distance between cities
  int arr[][3]={{0,1,400},{1,2,500},{0,2,600}};

  //printing the structure
  printf("FROM \t TO \t \t DISTANCE \n");
  printf("%s \t %s \t %d \n",c[0],c[1],arr[0][2]);
  printf("%s \t %s \t %d \n",c[1],c[2],arr[1][2]);
  printf("%s\t %s \t\t %d \n",c[2],c[0],arr[2][2]);

  //finding the lowest distance and highest distance
  int lowest=arr[0][2];
  int highest=arr[0][2];
  int lpos=0,hpos=0;
  for(int i=0;i<3;i++)
  {
    if(arr[i][2]<lowest)
    {
      lowest=arr[i][2];
      lpos=i;
    }
    if(arr[i][2]>highest)
    {
      highest=arr[i][2];
      hpos=i;
    }
  }
  
  //printing the pairs
  printf("The pair of cities with lowest distance are: %s and %s \n",c[arr[lpos][0]],c[arr[lpos][1]]);
  printf("The pair of cities with highest distance are: %s and %s \n",c[arr[hpos][0]],c[arr[hpos][1]]);

  //2nd part
  int speed=100;
  int distance=arr[lpos][2];
  int time=(distance/speed)*60;
  
  if(distance>=100)
  {
    time+=5;
    distance-=100;
    if(distance>=300)
    {
      time+=20;
    }
  }
  printf("total time taken is %d minutes",time);
}