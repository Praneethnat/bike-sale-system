#include<stdio.h>
#include<conio.h>
#include<string.h>
struct regi
{
	char rno[10],add[20],mob[10],dop[10],veh[10];
};
main()
{
	int ch;
	printf("1.Bike sales\n");
	int n,ex,rt,in,ef,oth,sc,hel;
	float gt,dp,dis,tot;
	char name[20],mob[10];
	printf("Enter name and mobile number:\n");
	scanf("%s%s",&name,&mob);
	printf("1.Royal enfield\n2.Avenger\n3.R15\n4.MT\n5.Glamour\n6.pulser220\n7.Duke\n8.Fz\n9.Karishma\n10.Xtreme\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Royal enfield\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=250000;
		rt=0.50*ex;
		in=20000;
		ef=21000;
		oth=21200;
		sc=3150;
		hel=2000;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Royal enfield\t%f\n",gt);
		}
	if(n==2)
	{
		printf("Avenger\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=200000;
		rt=0.15*ex;
		in=10000;
		ef=15000;
		oth=18200;
		sc=1250;
		hel=2000;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Avenger\t%f\n",gt);
	}
	if(n==3)
	{
	   	printf("R15\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=300000;
		rt=0.15*ex;
		in=20000;
		ef=21000;
		oth=18200;
		sc=3250;
		hel=4000;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for R15\t%f\n",gt);	
	}
	if(n==4)
	{
		printf("MT\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=150000;
		rt=0.15*ex;
		in=7000;
		ef=5000;
		oth=4200;
		sc=1250;
		hel=1100;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for MT\t%f\n",gt);
	}
	if(n==5)
	{
		printf("Glamour\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=110000;
		rt=0.15*ex;
		in=5000;
		ef=5000;
		oth=8200;
		sc=1250;
		hel=12000;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Glamour\t%f\n",gt);
	}
	if(n==6)
	{
		printf("Pulser220\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=180000;
		rt=0.15*ex;
		in=9000;
		ef=12000;
		oth=11200;
		sc=1250;
		hel=2000;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Pulser220\t%f\n",gt);
	}
	if(n==7)
	{
		printf("Duke\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=250000;
		rt=0.15*ex;
		in=10000;
		ef=13000;
		oth=18200;
		sc=1250;
		hel=3000;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Duke\t%f\n",gt);
	}
	if(n==8)
	{
		printf("Fz\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=220000;
		rt=0.25*ex;
		in=11000;
		ef=15000;
		oth=15200;
		sc=1850;
		hel=2700;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Fz\t%f\n",gt);
	}
	if(n==9)
	{
		printf("Karishma\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=90000;
		rt=0.15*ex;
		in=3000;
		ef=6150;
		oth=7200;
		sc=1750;
		hel=1100;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Karishma\t%f\n",gt);
	}
	if(n==10)
	{
		printf("Xtreme\nEnter discount percentage:\n");
		scanf("%f",&dis);
		ex=110000;
		rt=0.35*ex;
		in=7000;
		ef=11050;
		oth=9200;
		sc=1050;
		hel=3150;
		tot=ex+rt+in+ef+oth+sc+hel;
		dp=dis/100*tot;
		gt=tot-dp;
		printf("________\n\tGanapathi motors\n\tMob.no.7569032209\n");
		printf("________\n");
		printf("Customer Name:%s\n mobile number:%s\n",name,mob);
		printf("________\n");
		printf("Particular\t \t cost\n");
		printf("_______\n");
		printf("EX-shoeroom price\t\t%d\nRoad tax\t\t\t%d\nInsurance\t\t\t%d\nExtra-fitting\t\t\t%d\nOthers\t\t\t%d\nServicecharge\t\t\t%d\nHelmet\t\t\t\t%d\nTotal\t\t\t\t%f\nDiscountpercent\t\t%f\n",ex,rt,in,ef,oth,sc,hel,tot,dis);
		printf("Grand total for Xtreme\t%f\n",gt);
	}
}
