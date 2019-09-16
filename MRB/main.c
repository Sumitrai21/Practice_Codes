#include<stdio.h>

int main()
{
    int t = 0;

    scanf("%d",&t);

    for(int x1 = 0;x1<t;x1++)
    {
        int n = 0;
        scanf("%d",&n);

        char shape;
        int x[2*n];
        int y[2*n];

        for(int q = 0;q<n;q++)
        {

            scanf(" %c",&shape);

            if(shape=='p')
            {

                scanf("%d%d",&x[q],&y[q]);
                x[n+q] = x[q];
                y[n+q] = y[q];
            }

            else if(shape=='c')
            {
                int xa,ya,ra;

                scanf("%d%d%d",&xa,&ya,&ra);
                x[q]= xa-ra;
                y[q]=ya-ra;
                x[n+q]=xa+ra;
                y[n+q] = ya+ra;
            }

            else
            {
                int x1,y1,x2,y2;

                scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
                x[q] = x1;
                x[n+q] = x2;
                y[q] = y1;
                y[n+q] = y2;
            }

        }

        int xmin = x[0];
        int xmax = x[0];
        int ymin = y[0];
        int ymax = y[0];
        for(int i = 0; i<2*n;i++)
        {
          if(x[i]> xmax)
          {
              xmax = x[i];
          }

          if(x[i]<xmin)
          {
              xmin = x[i];
          }
        }

        for(int i = 0;i<2*n;i++)
        {


          if(y[i]>ymax)
          {
              ymax = y[i];
          }

          if(y[i]<ymin)
          {
              ymin = y[i];
          }
        }

        printf("%d\t%d\t%d\t%d\n\n",xmin,ymin,xmax,ymax);

    }
}
