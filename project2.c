#include<stdio.h>
#include<stdlib.h>
int main()
{
  double rp,nrp,mat,ef;
  double rpp1,rpp2,rpp,pft;
  printf("\nenter the time taken to service a page fault if an empty page is available in milliseconds");
  scanf("%lf",&nrp);
  printf("\nenter the time taken to  to service a page fault if an page is not available  in milliseconds ");
  scanf("%lf",&rp);
  printf("\n enter the memory acces time in nanoseconds");
  scanf("%lf",&mat);
  printf("\nenter rate the rate at which page is modified in percentage");
  scanf("%lf",&rpp);
  rpp1=(rpp/100);
  rpp2=(1-rpp1);
  printf("\nenter the effective access time");
  scanf("%lf",&ef);
  printf("\n formula to calulate effective acess time is" );
  printf("\n eft: (1- Page Fault)* Memory time+p*modifed*time to service page fault+p*(1-modifed)service time for no page fault");
  pft=(ef-mat)/((rpp1*rp*1000000)+(rpp2*nrp*1000000)-mat);
  printf("\n maximum acceptable page-fault rate is %lf",pft);
}
