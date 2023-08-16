# include<stdio.h>
# include<math.h>
int main(){
    int num,i,isprime=1;
    scanf("%d",&num);
    for(i=2;i<=ceil(sqrt(num));i++)
    {
        if(num%i==0)
        {
            isprime=0;
        }
    }

    if(isprime){
        printf("the number %d is a prime!\n",num);
    }
    else
    {
        printf("the number %d is not a prime!\n",num);
    }
    return 0;
}                                                                                                                                                                                                                                     #include<stdio>h>
                                                                                                                          ##
