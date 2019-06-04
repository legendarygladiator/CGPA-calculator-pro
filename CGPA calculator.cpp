#include <stdio.h>
#include <math.h>
int main()
{
    int grade1[13],marks1[13],i,skip[50],skipped,marks[13];
    float scredits[13],credits[13]={4.0,3.0,3.0,3.0,1.0,2.0,3.0,1.0,1.0,2.0,1.0,2.0,1.0},sum3=0;
    float sum2=0,sgpa[13],gpa[13],sum1=0,Sgpa,grades[13];
    float SGPA,x,y,z,theory=0,practical=0,sum=0,sum4=0,m;
    char confirm;
    for (i=0;i<13;i++)
    {
        marks1[i]=0;
        skip[i]=0;
        grade1[i]=0;
    }
    printf ("\t\t\t\t\t Made by MANAK\n\t\t\t\t\tUploaded on github\n");
    printf ("Lets calculate your CGPA... \n");
    printf ("Did you skip any exam? (y/n)\t");
    scanf ("%c",&confirm);
    if (confirm=='y')
    {
    printf ("\nDarn it! How many did you skip??\n");
    scanf ("%d",&skipped);
    printf ("Which subjects?");
    printf ("Enter the corresponding numbers:\n");
    printf ("1 for A.MATHEMATICS\n2 for A.PHYSICS\n3 for ENGINEERING MECHANICS\n");
    printf ("4 for ELECTRICAL\n5 for HVPE\n6 for FOC\n7 for A.CHEMISTRY\n");
    printf ("8 for A.PHYSICS\n9 for ELECTRONICS LAB\n10 for WORKSHOP\n");
    printf ("11 for FOC LAB\n12 for ENGINEERING DRAWING\n13 for CHEMSITRY LAB\n");
    for (i=0;i<skipped;i++)
    {
        scanf ("%d",&skip[i]);
    }
    printf ("\nNow enter your marks:\n");
    if (skip[0]==1||skip[1]==1||skip[2]==1||skip[3]==1||skip[4]==1||skip[5]==1||skip[6]==1||skip[7]==1||skip[8]==1||skip[9]==1||skip[10]==1||skip[11]==1||skip[12]==1)
    {
        scredits[0]=0.0;
    }
    else if (skip[0]!=1||skip[1]!=1||skip[2]!=1||skip[3]!=1||skip[4]!=1||skip[5]!=1||skip[6]!=1||skip[7]!=1||skip[8]!=1||skip[9]!=1||skip[10]!=1||skip[11]!=1||skip[12]!=1)
    {
        printf ("APPLIED MATHEMATICS:\n");
        scanf ("%d",&marks1[0]);
        scredits[0]=4.0;
    }

    if (skip[0]==2||skip[1]==2||skip[2]==2||skip[3]==2||skip[4]==2||skip[5]==2||skip[6]==2||skip[7]==2||skip[8]==2||skip[9]==2||skip[10]==2||skip[11]==2||skip[12]==2)
    {
        scredits[1]=0.0;
    }
    else if (skip[0]!=2||skip[1]!=2||skip[2]!=2||skip[3]!=2||skip[4]!=2||skip[5]!=2||skip[6]!=2||skip[7]!=2||skip[8]!=2||skip[9]!=2||skip[10]!=2||skip[11]!=2||skip[12]!=2)
    {
        printf ("APPLIED PHYSICS:\n");
        scanf ("%d",&marks1[1]);
        scredits[1]=3.0;
    }

    if (skip[0]==3||skip[1]==3||skip[2]==3||skip[3]==3||skip[4]==3||skip[5]==3||skip[6]==3||skip[7]==3||skip[8]==3||skip[9]==3||skip[10]==3||skip[11]==3||skip[12]==3)
    {
        scredits[2]=0.0;
    }
    else if (skip[0]!=3||skip[1]!=3||skip[2]!=3||skip[3]!=3||skip[4]!=3||skip[5]!=3||skip[6]!=3||skip[7]!=3||skip[8]!=3||skip[9]!=3||skip[10]!=3||skip[11]!=3||skip[12]!=3)
    {
        printf ("ENGINEERING MECHANICS:\n");
        scanf ("%d",&marks1[2]);
        scredits[2]=3.0;
    }

    if (skip[0]==4||skip[1]==4||skip[2]==4||skip[3]==4||skip[4]==4||skip[5]==4||skip[6]==4||skip[7]==4||skip[8]==4||skip[9]==4||skip[10]==4||skip[11]==4||skip[12]==4)
    {
        scredits[3]=0.0;
    }
    else if (skip[0]!=4||skip[1]!=4||skip[2]!=4||skip[3]!=4||skip[4]!=4||skip[5]!=4||skip[6]!=4||skip[7]!=4||skip[8]!=4||skip[9]!=4||skip[10]!=4||skip[11]!=4||skip[12]!=4)
    {
        printf ("ELECTRICAL:\n");
        scanf ("%d",&marks1[3]);
        scredits[3]=3.0;
    }

    if (skip[0]==5||skip[1]==5||skip[2]==5||skip[3]==5||skip[4]==5||skip[5]==5||skip[6]==5||skip[7]==5||skip[8]==5||skip[9]==5||skip[10]==5||skip[11]==5||skip[12]==5)
    {
        scredits[4]=0.0;
    }
    else if (skip[0]!=5||skip[1]!=5||skip[2]!=5||skip[3]!=5||skip[4]!=5||skip[5]!=5||skip[6]!=5||skip[7]!=5||skip[8]!=5||skip[9]!=5||skip[10]!=5||skip[11]!=5||skip[12]!=5)
    {
        printf ("HVPE:\n");
        scanf ("%d",&marks1[4]);
        scredits[4]=1.0;
    }

    if (skip[0]==6||skip[1]==6||skip[2]==6||skip[3]==6||skip[4]==6||skip[5]==6||skip[6]==6||skip[7]==6||skip[8]==6||skip[9]==6||skip[10]==6||skip[11]==6||skip[12]==6)
    {
        scredits[5]=0.0;
    }
    else if (skip[0]!=6||skip[1]!=6||skip[2]!=6||skip[3]!=6||skip[4]!=6||skip[5]!=6||skip[6]!=6||skip[7]!=6||skip[8]!=6||skip[9]!=6||skip[10]!=6||skip[11]!=6||skip[12]!=6)
    {
        printf ("FOC:\n");
        scanf ("%d",&marks1[5]);
        scredits[5]=2.0;
    }

    if (skip[0]==7||skip[1]==7||skip[2]==7||skip[3]==7||skip[4]==7||skip[5]==7||skip[6]==7||skip[7]==7||skip[8]==7||skip[9]==7||skip[10]==7||skip[11]==7||skip[12]==7)
    {
        scredits[6]=0.0;
    }
    else if (skip[0]!=7||skip[1]!=7||skip[2]!=7||skip[3]!=7||skip[4]!=7||skip[5]!=7||skip[6]!=7||skip[7]!=7||skip[8]!=7||skip[9]!=7||skip[10]!=7||skip[11]!=7||skip[12]!=7)
    {
        printf ("APPLIED CHEMISRY:\n");
        scanf ("%d",&marks1[6]);
        scredits[6]=3.0;
    }

    if (skip[0]==8||skip[1]==8||skip[2]==8||skip[3]==8||skip[4]==8||skip[5]==8||skip[6]==8||skip[7]==8||skip[8]==8||skip[9]==8||skip[10]==8||skip[11]==8||skip[12]==8)
    {
        scredits[7]=0.0;
    }
    else if (skip[0]!=8||skip[1]!=8||skip[2]!=8||skip[3]!=8||skip[4]!=8||skip[5]!=8||skip[6]!=8||skip[7]!=8||skip[8]!=8||skip[9]!=8||skip[10]!=8||skip[11]!=8||skip[12]!=8)
    {
        printf ("APPLIED PHYSICS LAB:\n");
        scanf ("%d",&marks1[7]);
        scredits[7]=1.0;
    }

    if (skip[0]==9||skip[1]==9||skip[2]==9||skip[3]==9||skip[4]==9||skip[5]==9||skip[6]==9||skip[7]==9||skip[8]==9||skip[9]==9||skip[10]==9||skip[11]==9||skip[12]==9)
    {
        scredits[8]=0.0;
    }
    else if (skip[0]!=9||skip[1]!=9||skip[2]!=9||skip[3]!=9||skip[4]!=9||skip[5]!=9||skip[6]!=9||skip[7]!=9||skip[8]!=9||skip[9]!=9||skip[10]!=9||skip[11]!=9||skip[12]!=9)
    {
        printf ("ELECTRONICS LAB:\n");
        scanf ("%d",&marks1[8]);
        scredits[8]=1.0;
    }

    if (skip[0]==10||skip[1]==10||skip[2]==10||skip[3]==10||skip[4]==10||skip[5]==10||skip[6]==10||skip[7]==10||skip[8]==10||skip[9]==10||skip[10]==10||skip[11]==10||skip[12]==10)
    {
        scredits[9]=0.0;
    }
    else if (skip[0]!=10||skip[1]!=10||skip[2]!=10||skip[3]!=10||skip[4]!=10||skip[5]!=10||skip[6]!=10||skip[7]!=10||skip[8]!=10||skip[9]!=10||skip[10]!=10||skip[11]!=10||skip[12]!=10)
    {
        printf ("WORKSHOP:\n");
        scanf ("%d",&marks1[9]);
        scredits[9]=2.0;
    }

    if (skip[0]==11||skip[1]==11||skip[2]==11||skip[3]==11||skip[4]==11||skip[5]==11||skip[6]==11||skip[7]==11||skip[8]==11||skip[9]==11||skip[10]==11||skip[11]==11||skip[12]==11)
    {
        scredits[10]=0.0;
    }
    else if (skip[0]!=11||skip[1]!=11||skip[2]!=11||skip[3]!=11||skip[4]!=11||skip[5]!=11||skip[6]!=11||skip[7]!=11||skip[8]!=11||skip[9]!=11||skip[10]!=11||skip[11]!=11||skip[12]!=11)
    {
        printf ("FOC LAB:\n");
        scanf ("%d",&marks1[10]);
        scredits[10]=1.0;
    }

    if (skip[0]==12||skip[1]==12||skip[2]==12||skip[3]==12||skip[4]==12||skip[5]==12||skip[6]==12||skip[7]==12||skip[8]==12||skip[9]==12||skip[10]==12||skip[11]==12||skip[12]==12)
    {
        scredits[11]=0.0;
    }
    else if (skip[0]!=12||skip[1]!=12||skip[2]!=12||skip[3]!=12||skip[4]!=12||skip[5]!=12||skip[6]!=12||skip[7]!=12||skip[8]!=12||skip[9]!=12||skip[10]!=12||skip[11]!=12||skip[12]!=12)
    {
        printf ("ENGINEERING DRAWING:\n");
        scanf ("%d",&marks1[11]);
        scredits[11]=2.0;
    }

    if (skip[0]==13||skip[1]==13||skip[2]==13||skip[3]==13||skip[4]==13||skip[5]==13||skip[6]==13||skip[7]==13||skip[8]==13||skip[9]==13||skip[10]==13||skip[11]==13||skip[12]==13)
    {
        scredits[12]=0.0;
    }
    else if (skip[0]!=13||skip[1]!=13||skip[2]!=13||skip[3]!=13||skip[4]!=13||skip[5]!=13||skip[6]!=13||skip[7]!=13||skip[8]!=13||skip[9]!=13||skip[10]!=13||skip[11]!=13||skip[12]!=13)
    {
        printf ("APPLIED CHEMISTRY LAB:\n");
        scanf ("%d",&marks1[12]);
        scredits[12]=1.0;
    }
    for (i=0;i<13;i++)
    {
        if (marks1[i]>=90)
            {grade1[i]=10;}
        else if (marks1[i]>=75 && marks1[i]<90)
            {grade1[i]=9;}
        else if (marks1[i]>=60 && marks1[i]<75)
            {grade1[i]=8;}
        else if (marks1[i]>=50 && marks1[i]<60)
            {grade1[i]=7;}
        else if (marks1[i]>=40 && marks1[i]<50)
            {grade1[i]=6;}
        else if (marks1[i]>=30 && marks1[i]<40)
            {grade1[i]=5;}
        else if (marks1[i]>=20 && marks1[i]<30)
            {grade1[i]=4;}
        else if (marks1[i]>=10 && marks1[i]<20)
            {grade1[i]=3;}
        else if (marks1[i]<10)
            {grade1[i]=1;}
    }
    for (i=0;i<13;i++)
    {
        sgpa[i]=grade1[i]*scredits[i];
    }
    for (i=0;i<13;i++)
    {
        sum2=sum2+sgpa[i];
        sum3=sum3+scredits[i];
        sum4=sum4+marks1[i];
    }
    Sgpa=sum2/sum3;
    m=sum4/(13-skipped);
    printf ("\nYour overall aggregate is: %f\n",m);
    printf ("Your SGPA is: %f",Sgpa);
    printf ("\nYour PERCENTAGE is: %f%%",(Sgpa*10));
    printf ("\nIn this semester, SGPA is equal to the CGPA\nTHANK YOU!!");
    }
    else if (confirm=='n')
    {
    printf ("Cool!!\n");
    printf ("Now enter our marks here:\n");
    printf ("APPLIED MATHEMATICS:\n");
    scanf ("%d",&marks[0]);
    printf ("APPLIED PHYSICS\n");
    scanf ("%d",&marks[1]);
    printf ("ENGINEERING MECHANICS\n");
    scanf ("%d",&marks[2]);
    printf ("ELECTRICAL\n");
    scanf ("%d",&marks[3]);
    printf ("HVPE\n");
    scanf ("%d",&marks[4]);
    printf ("FOC\n");
    scanf ("%d",&marks[5]);
    printf ("APPLIED CHEMISTRY\n");
    scanf ("%d",&marks[6]);
    printf ("APPLIED PHYSICS LAB\n");
    scanf ("%d",&marks[7]);
    printf ("ELECTRONICS LAB\n");
    scanf ("%d",&marks[8]);
    printf ("WORKSHOP\n");
    scanf ("%d",&marks[9]);
    printf ("FOC LAB\n");
    scanf ("%d",&marks[10]);
    printf ("ENGINEERING DRAWING\n");
    scanf ("%d",&marks[11]);
    printf ("APPLIED CHEMISTRY LAB\n");
    scanf ("%d",&marks[12]);
    for (i=0;i<=12;i++)
    {
        sum=sum+marks[i];
    }
    printf ("Your overall aggregate is: %f\n",(sum/13));
    for (i=0;i<=6;i++)
    {
        theory=theory+marks[i];
    }
    for (i=7;i<=12;i++)
    {
        practical=practical+marks[i];
    }
    printf ("The aggregate for theory is %f\n",(theory/7));
    printf ("The aggregate for practicals is %f",(practical/6));
    for (i=0;i<13;i++)
    {
        if (marks [i]>=90)
            {grades[i]=10;}
        else if (marks [i]>=75 && marks [i]<90)
            {grades[i]=9;}
        else if (marks [i]>=60 && marks [i]<75)
            {grades[i]=8;}
        else if (marks [i]>=50 && marks [i]<60)
            {grades[i]=7;}
        else if (marks [i]>=40 && marks [i]<50)
            {grades[i]=6;}
        else if (marks [i]>=30 && marks [i]<40)
            {grades[i]=5;}
        else if (marks [i]>=20 && marks [i]<30)
            {grades[i]=4;}
        else if (marks [i]>=10 && marks [i]<20)
            {grades[i]=3;}
        else if (marks [i]<10)
            {grades[i]=2;}
        else if (marks[i]==0)
            {grades[i]=1;}
    }
    for (i=0;i<13;i++)
    {
        gpa[i]=grades[i]*credits[i];
    }
    for (i=0;i<13;i++)
    {
        sum1=sum1+gpa[i];
    }
    SGPA=sum1/27;
    printf ("\nYour SGPA is: %f",SGPA);
    printf ("\nYour PERCENTAGE is: %f%% ",(SGPA*10));
    printf ("\nIn this semester, SGPA is equal to the CGPA\nTHANK YOU!!");}
    return 0;
}
