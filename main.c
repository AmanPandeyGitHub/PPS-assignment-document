#include <stdio.h>
int main()
{
  //Simple program to calculate bill in a restaurant accounting for number of dishes, servings of each, and tax
  int num,z,srv;
  float cst,tax;
  double totalbill;
  totalbill=0.0;
  printf("Enter number of dishes: ");
  scanf("%d",&num);
  printf("\nEnter tax rate: ");
  scanf("%f",&tax);
  for(z=1;z<=num;z++)
    {
      printf("\nDish %d \n",z);
      printf("Enter number of servings: ");
      scanf("%d",&srv);
      printf("\nEnter cost of one serving: ");
      scanf("%f",&cst);
      totalbill+=(cst*srv);
    }
  printf("\nNumber of dishes: %d \n",num);
  printf("Pre-tax amount: %.2lf\n",totalbill);
  totalbill=totalbill*(100.0+tax)/100.0;
  printf("Taxation rate: %.2f%\n",tax);
  printf("Total bill: Rs. %.2lf \n",totalbill);
  return 0;
}