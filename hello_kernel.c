#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int init_module(void)
{
    printk(KERN_INFO "Hello, kernel!\n");
    return 0;
}

void cleanup_module(void)
{
    printk(KERN_INFO "Goodbye, kernel!\n");
    printk(KERN_INFO "my first kernel\n");
    int a=5;
    int b=6;
    printk("%d\n",a+b);

    ///printing some prime numbers
    int prime[1000]={0};
    for(int i=2;i*i<20;i++)
    {
         if(prime[i]==0)
         {
             for(int j=i*i;j<20;j+=i)
             {
                 prime[j]=1;
             }
         }
         
    }
    for(int i=2;i<20;i++)
    {
        if(prime[i]==0)
        {

             printk("%d\n",i);
        }


    }    


}

