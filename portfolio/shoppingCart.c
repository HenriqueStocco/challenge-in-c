#include <stdio.h>
#include <string.h>

struct Product
{
  int code;
  char name[10];
  int quantity;
  float unity;
};

int main()
{
  int code, quantity, i, z, products;
  float unity, total;
  char name[10];

  printf("Welcome!\n");
  printf("Enter a product numbers what you want: \n");

  scanf("%d", &products);
  printf("\n");

  struct Product product[products];

  for (i = 0; i < products; i++)
  {
    printf("Enter the code of product: \n");
    scanf("%d", &code);
    printf("\n");

    if (product[i - 1].code == code)
    {
      printf("This code already exists!");
      break;
    }

    product[i].code = code;

    printf("Enter the name of product: \n");
    scanf("%s", name);
    printf("\n");

    strcpy(product[i].name, name);

    printf("Enter the quantity of products will have: \n");
    scanf("%d", &quantity);
    printf("\n");

    product[i].quantity = quantity;

    printf("Enter the price of each unity of products: \n");
    scanf("%f", &unity);
    printf("\n");

    product[i].unity = unity;
  }

  int length = sizeof(product) / sizeof(product[0]);

  for (z = 0; z < length; z++)
  {
    printf("PRODUCT: \n");
    printf("\nID: %d\n", product[z].code);
    printf("NAME: %s\n", product[z].name);
    printf("QUANTITY: %d\n", product[z].quantity);
    printf("UNITY: %.2f\n", product[z].unity);

    total = product[z].quantity * product[z].unity;

    printf("TOTAL PRICE: %.2f\n", total);
    printf("\n");
  }

  return 0;
}