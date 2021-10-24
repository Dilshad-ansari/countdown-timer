main()
{
    int i,j,a;
    printf("THE STAR PATTERS IS \n");
     for ( j=5; j>=0; j--)
     {
         for(i=5; i>0; i--)
        {
            if(j<=5-i)
              printf(" * ");
            else
                printf("   ");
         }
         printf("\n");


     }





}
