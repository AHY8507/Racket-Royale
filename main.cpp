#include <iostream>
#include <graphics.h>
using namespace std;
main()
{
    initwindow(1265,735);
    setcolor(9);
    rectangle(40-1,40-1,1225+1,735+1);
    rectangle(50-1,50-1,1215+1,735+1);
    setfillstyle(3,5);
    floodfill(1,1,9);
    setfillstyle(1,3);
    floodfill(45,45,9);
    int a=100 , b=670 , ap=1070 , bp=670 , taz2=1 ,taz1=0 ,z=150 , l=640 , x=10 , y=10 , s , p , anda , moot;
    int cirx=632 , ciry=400;
    int a1=100 , a2=110 , a3=190 , a4=150;
    int b1=220 , b2=110 , b3=310 , b4=150;
    int c1=340 , c2=110 , c3=430 , c4=150;
    int d1=835 , d2=110 , d3=925 , d4=150;
    int e1=955 , e2=110 , e3=1045 , e4=150;
    int f1=1075 , f2=110 , f3=1165 , f4=150;
    int g1=100 , g2=190 , g3=210 , g4=230;
    int h1=250 , h2=190 , h3=360 , h4=230;
    int i1=905 , i2=190 , i3=1015 , i4=230;
    int j1=1055 , j2=190 , j3=1165 , j4=230;
    int vas1=420 , vas2=205 , vas3=845 , vas4=215;
    int lvas1=420 , lvas2=220 , lvas3=845 , lvas4=230;
    int pvas1=420 , pvas2=190 , pvas3=845 , pvas4=200;
    char n;
    while(taz2<=360)
    {
        setcolor(3);
        arc(632,367,taz1,taz2,120);
        taz2++;
        delay(15);
    }
    taz2=1;
    while(taz2<=360)
    {
        setcolor(3);
        arc(632,367,taz1,taz2,100);
        taz2++;
        delay(15);
    }
    settextstyle(7,0,5);
    outtextxy(560,317,"Racket");
    settextstyle(7,0,4);
    outtextxy(570,380,"Royale");
    setfillstyle(2,4);
    floodfill(620,360,3);
    setfillstyle(2,5);
    floodfill(733,360,3);
    delay(1000);
    settextstyle(9,0,2);
    outtextxy(130,650,"Click Enter To Continue.");
    getch();
    setcolor(0);
    setfillstyle(1,0);
    floodfill(500,500,9);
    settextstyle(9,0,2);
    outtextxy(130,650,"Click Enter To Continue.");
    setcolor(3);
    settextstyle(9,0,4);
    outtextxy(130,150,"Hello!!!");
    outtextxy(130,220,"Welcome To The Racket Royale.");
    settextstyle(9,0,2);
    outtextxy(130,650,"Click Enter To Continue.");
    getch();
    setcolor(0);
    settextstyle(9,0,4);
    outtextxy(130,150,"Hello!!!");
    outtextxy(130,220,"Welcome To The Racket Royale.");
    settextstyle(9,0,2);
    outtextxy(130,650,"Click Enter To Continue.");
    setcolor(3);
    settextstyle(9,0,3);
    outtextxy(90,90,"Choose The Speed Of Game In CMD Page.");
    outtextxy(90,140,"Slow : 1");
    outtextxy(90,190,"Normal : 2");
    outtextxy(90,240,"Fast : 3");
    settextstyle(9,0,3);
    outtextxy(90,290,"Choose The Size Of Racket In CMD Page.");
    outtextxy(90,340,"Little : 1");
    outtextxy(90,390,"Medium : 2");
    outtextxy(90,440,"Large : 3");
    settextstyle(9,0,3);
    outtextxy(90,490,"Choose The Mode Of Game In CMD Page.");
    outtextxy(90,540,"1 Player : 1");
    outtextxy(90,590,"2 Player : 2");
    outtextxy(90,650," ");
    cout<<"Choose The Speed Of Game : ";
    cin>>s;
    cout<<"Choose The Size Of Racket : ";
    cin>>anda;
    cout<<"Choose The Mode Of Game : ";
    cin>>p;
    setcolor(0);
    settextstyle(9,0,3);
    outtextxy(90,90,"Choose The Speed Of Game In CMD Page.");
    outtextxy(90,140,"Slow : 1");
    outtextxy(90,190,"Normal : 2");
    outtextxy(90,240,"Fast : 3");
    settextstyle(9,0,3);
    outtextxy(90,290,"Choose The Size Of Racket In CMD Page.");
    outtextxy(90,340,"Little : 1");
    outtextxy(90,390,"Medium : 2");
    outtextxy(90,440,"Large : 3");
    settextstyle(9,0,3);
    outtextxy(90,490,"Choose The Mode Of Game In CMD Page.");
    outtextxy(90,540,"1 Player : 1");
    outtextxy(90,590,"2 Player : 2");
    outtextxy(90,650," ");
    if(anda==1)
        moot=80;
    if(anda==2)
        moot=100;
    if(anda==3)
        moot=120;
    setcolor(9);
    rectangle(a1,a2,a3,a4);
    setfillstyle(9,2);
    floodfill(a1+1,a2+1,9);
    rectangle(b1,b2,b3,b4);
    setfillstyle(9,2);
    floodfill(b1+1,b2+1,9);
    rectangle(c1,c2,c3,c4);
    setfillstyle(9,2);
    floodfill(c1+1,c2+1,9);
    rectangle(d1,d2,d3,d4);
    setfillstyle(9,2);
    floodfill(d1+1,d2+1,9);
    rectangle(e1,e2,e3,e4);
    setfillstyle(9,2);
    floodfill(e1+1,e2+1,9);
    rectangle(f1,f2,f3,f4);
    setfillstyle(9,2);
    floodfill(f1+1,f2+1,9);
    rectangle(g1,g2,g3,g4);
    setfillstyle(8,4);
    floodfill(g1+1,g2+1,9);
    rectangle(h1,h2,h3,h4);
    setfillstyle(8,4);
    floodfill(h1+1,h2+1,9);
    rectangle(i1,i2,i3,i4);
    setfillstyle(8,4);
    floodfill(i1+1,i2+1,9);
    rectangle(j1,j2,j3,j4);
    setfillstyle(8,4);
    floodfill(j1+1,j2+1,9);
    rectangle(vas1,vas2,vas3,vas4);
    setfillstyle(6,7);
    floodfill(vas1+1,vas2+1,9);
    rectangle(lvas1,lvas2,lvas3,lvas4);
    setfillstyle(6,7);
    floodfill(lvas1+1,lvas2+1,9);
    rectangle(pvas1,pvas2,pvas3,pvas4);
    setfillstyle(6,7);
    floodfill(pvas1+1,pvas2+1,9);
    setcolor(9);
    circle(cirx,ciry,20);
    setfillstyle(8,14);
    floodfill(cirx+1,ciry+1,9);
if(p==1)
{
    while(1)
    {
        setcolor(9);
        circle(z,l,9);
        setfillstyle(1,3);
        floodfill(z,l,9);
        setcolor(9);
        rectangle(a,b,a+moot,b+10);
        setfillstyle(1,3);
        floodfill(a+50,b+5,9);
        if(s==1)
            delay(80);
        if(s==2)
            delay(60);
        if(s==3)
            delay(40);
        setcolor(0);
        circle(z,l,9);
        setfillstyle(1,0);
        floodfill(z,l,0);
        z+=x;
        l+=y;
        rectangle(a,b,a+moot,b+10);
        setfillstyle(1,0);
        floodfill(a+50,b+5,0);
        if(kbhit())
            n=getch();
        if(n=='q' or n=='Q')
            return 1000;
        if(n=='d' or n=='D')
            a+=20;
        if(n=='a' or n=='A')
            a-=20;
        if(a+moot>=1215)
            a=a-20;
        if(a<=50)
            a=a+20;
        if(l>=725)
            break;
        if(l<=60)
            y=10;
        if(z>=1200)
            x=-10;
        if(z<=60)
            x=10;
        if(l==660 && a<=z && z<=a+moot)
            y=-10;
        if(z<=a3+10 && z>=a1-10 && l<=a4+10 && l>=a2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(a1,a2,a3,a4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            a1=0;
            a2=0;
            a3=0;
            a4=0;
        }
        if(z<=b3+10 && z>=b1-10 && l<=b4+10 && l>=b2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(b1,b2,b3,b4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            b1=0;
            b2=0;
            b3=0;
            b4=0;
        }
        if(z<=c3+10 && z>=c1-10 && l<=c4+10 && l>=c2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(c1,c2,c3,c4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            c1=0;
            c2=0;
            c3=0;
            c4=0;
        }
        if(z<=d3+10 && z>=d1-10 && l<=d4+10 && l>=d2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(d1,d2,d3,d4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            d1=0;
            d2=0;
            d3=0;
            d4=0;
        }
        if(z<=e3+10 && z>=e1-10 && l<=e4+10 && l>=e2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(e1,e2,e3,e4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            e1=0;
            e2=0;
            e3=0;
            e4=0;
        }
        if(z<=f3+10 && z>=f1-10 && l<=f4+10 && l>=f2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(f1,f2,f3,f4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            f1=0;
            f2=0;
            f3=0;
            f4=0;
        }
        if(z<=g3+10 && z>=g1-10 && l<=g4+10 && l>=g2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(g1,g2,g3,g4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            g1=0;
            g2=0;
            g3=0;
            g4=0;
        }
        if(z<=h3+10 && z>=h1-10 && l<=h4+10 && l>=h2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(h1,h2,h3,h4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            h1=0;
            h2=0;
            h3=0;
            h4=0;
        }
        if(z<=i3+10 && z>=i1-10 && l<=i4+10 && l>=i2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(i1,i2,i3,i4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            i1=0;
            i2=0;
            i3=0;
            i4=0;
        }
        if(z<=j3+10 && z>=j1-10 && l<=j4+10 && l>=j2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(j1,j2,j3,j4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            j1=0;
            j2=0;
            j3=0;
            j4=0;
        }
        if(z<=vas3+10 && z>=vas1-10 && l<=vas4+10 && l>=vas2-10)
        {
            Beep(700,80);
            y=-y;
            setcolor(0);
            rectangle(vas1,vas2,vas3,vas4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            vas1=0;
            vas2=0;
            vas3=0;
            vas4=0;
            setfillstyle(8,0);
            floodfill(cirx+1,ciry+1,9);
            setcolor(0);
            circle(cirx,ciry,20);
            rectangle(1,1,1265,735);
            setfillstyle(1,0);
            floodfill(1,1,14);
            setcolor(9);
            rectangle(40-1,40-1,1225+1,735+1);
            rectangle(50-1,50-1,1215+1,735+1);
            setfillstyle(3,5);
            floodfill(1,1,9);
            setfillstyle(1,3);
            floodfill(45,45,9);
            setcolor(9);
            rectangle(330,150,930,300);
            setfillstyle(1,3);
            floodfill(331,181,9);
            rectangle(340,160,920,290);
            setfillstyle(3,5);
            floodfill(341,221,9);
            rectangle(370,190,890,260);
            setfillstyle(1,3);
            floodfill(371,201,9);
            settextstyle(4,0,5);
            outtextxy(380,200,"#Victory Royale#");
            settextstyle(4,0,2);
            outtextxy(130,650,"Click Q To Exit");
            Beep(400,200);
            Beep(500,200);
            Beep(600,200);
            Beep(700,200);
            Beep(800,200);
            Beep(900,600);
            getch();
            return 1;
        }
        if(z<=lvas3+10 && z>=lvas1-10 && l<=lvas4+10 && l>=lvas2-10)
        {
            Beep(700,80);
            y=-y;
            setcolor(0);
            rectangle(lvas1,lvas2,lvas3,lvas4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            lvas1=0;
            lvas2=0;
            lvas3=0;
            lvas4=0;
        }
        if(z<=pvas3+10 && z>=pvas1-10 && l<=pvas4+10 && l>=pvas2-10)
        {
            Beep(700,80);
            y=-y;
            setcolor(0);
            rectangle(pvas1,pvas2,pvas3,pvas4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            pvas1=0;
            pvas2=0;
            pvas3=0;
            pvas4=0;
        }
        if(z-20<=cirx+9 && l-20<=ciry+9 && z+20>=cirx-9 && l+20>=ciry-9)
        {
            z=650;
            l=150;
            setcolor(9);
            rectangle(630,130,650,170);
            setfillstyle(8,14);
            floodfill(641,136,9);
            Beep(500,400);
            Beep(400,400);
            Beep(600,400);
            setfillstyle(8,0);
            floodfill(641,136,9);
            setcolor(0);
            rectangle(630,130,650,170);
        }
    }
}
if(p==2)
{
    while(1)
    {
        setcolor(9);
        circle(z,l,9);
        setfillstyle(1,3);
        floodfill(z,l,9);
        setcolor(9);
        rectangle(a,b,a+moot,b+10);
        setfillstyle(1,3);
        floodfill(a+50,b+5,9);
        rectangle(ap,bp,ap+moot,bp+10);
        setfillstyle(1,3);
        floodfill(ap+50,bp+5,9);
        if(s==1)
            delay(80);
        if(s==2)
            delay(60);
        if(s==3)
            delay(40);
        setcolor(0);
        circle(z,l,9);
        setfillstyle(1,0);
        floodfill(z,l,0);
        z+=x;
        l+=y;
        rectangle(a,b,a+moot,b+10);
        setfillstyle(1,0);
        floodfill(a+50,b+5,0);
        rectangle(ap,bp,ap+moot,bp+10);
        setfillstyle(1,0);
        floodfill(ap+50,bp+5,0);
        if(kbhit())
            n=getch();
        if(n=='q' or n=='Q')
            return 1000;
        if(n=='d' or n=='D')
            a+=20;
        if(n=='a' or n=='A')
            a-=20;
        if(n=='l' or n=='L')
            ap+=20;
        if(n=='j' or n=='J')
            ap-=20;
        if(ap+moot>=1215)
            ap=ap-20;
        if(ap<=633)
            ap=ap+20;
        if(a<=50)
            a=a+20;
        if(a+moot>=632)
            a=a-20;
        if(l>=725)
            break;
        if(l<=60)
            y=10;
        if(z>=1200)
            x=-10;
        if(z<=60)
            x=10;
        if(l==660 && a<=z && z<=a+moot)
            y=-10;
        if(l==660 && ap<=z && z<=ap+moot)
            y=-10;
        if(z<=a3+10 && z>=a1-10 && l<=a4+10 && l>=a2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(a1,a2,a3,a4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            a1=0;
            a2=0;
            a3=0;
            a4=0;
        }
        if(z<=b3+10 && z>=b1-10 && l<=b4+10 && l>=b2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(b1,b2,b3,b4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            b1=0;
            b2=0;
            b3=0;
            b4=0;
        }
        if(z<=c3+10 && z>=c1-10 && l<=c4+10 && l>=c2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(c1,c2,c3,c4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            c1=0;
            c2=0;
            c3=0;
            c4=0;
        }
        if(z<=d3+10 && z>=d1-10 && l<=d4+10 && l>=d2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(d1,d2,d3,d4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            d1=0;
            d2=0;
            d3=0;
            d4=0;
        }
        if(z<=e3+10 && z>=e1-10 && l<=e4+10 && l>=e2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(e1,e2,e3,e4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            e1=0;
            e2=0;
            e3=0;
            e4=0;
        }
        if(z<=f3+10 && z>=f1-10 && l<=f4+10 && l>=f2-10)
        {
            Beep(1000,60);
            y=-y;
            setcolor(0);
            rectangle(f1,f2,f3,f4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            f1=0;
            f2=0;
            f3=0;
            f4=0;
        }
        if(z<=g3+10 && z>=g1-10 && l<=g4+10 && l>=g2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(g1,g2,g3,g4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            g1=0;
            g2=0;
            g3=0;
            g4=0;
        }
        if(z<=h3+10 && z>=h1-10 && l<=h4+10 && l>=h2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(h1,h2,h3,h4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            h1=0;
            h2=0;
            h3=0;
            h4=0;
        }
        if(z<=i3+10 && z>=i1-10 && l<=i4+10 && l>=i2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(i1,i2,i3,i4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            i1=0;
            i2=0;
            i3=0;
            i4=0;
        }
        if(z<=j3+10 && z>=j1-10 && l<=j4+10 && l>=j2-10)
        {
            Beep(1100,60);
            y=-y;
            setcolor(0);
            rectangle(j1,j2,j3,j4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            j1=0;
            j2=0;
            j3=0;
            j4=0;
        }
        if(z<=vas3+10 && z>=vas1-10 && l<=vas4+10 && l>=vas2-10)
        {
            Beep(700,80);
            y=-y;
            setcolor(0);
            rectangle(vas1,vas2,vas3,vas4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            vas1=0;
            vas2=0;
            vas3=0;
            vas4=0;
            setfillstyle(8,0);
            floodfill(cirx+1,ciry+1,9);
            setcolor(0);
            circle(cirx,ciry,20);
            rectangle(1,1,1265,735);
            setfillstyle(1,0);
            floodfill(1,1,14);
            setcolor(9);
            rectangle(40-1,40-1,1225+1,735+1);
            rectangle(50-1,50-1,1215+1,735+1);
            setfillstyle(3,5);
            floodfill(1,1,9);
            setfillstyle(1,3);
            floodfill(45,45,9);
            setcolor(9);
            rectangle(330,150,930,300);
            setfillstyle(1,3);
            floodfill(331,181,9);
            rectangle(340,160,920,290);
            setfillstyle(3,5);
            floodfill(341,221,9);
            rectangle(370,190,890,260);
            setfillstyle(1,3);
            floodfill(371,201,9);
            settextstyle(4,0,5);
            outtextxy(380,200,"#Victory Royale#");
            settextstyle(4,0,2);
            outtextxy(130,650,"Click Q To Exit");
            Beep(400,200);
            Beep(500,200);
            Beep(600,200);
            Beep(700,200);
            Beep(800,200);
            Beep(900,600);
            getch();
            return 1000;
        }
        if(z<=lvas3+10 && z>=lvas1-10 && l<=lvas4+10 && l>=lvas2-10)
        {
            Beep(700,80);
            y=-y;
            setcolor(0);
            rectangle(lvas1,lvas2,lvas3,lvas4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            lvas1=0;
            lvas2=0;
            lvas3=0;
            lvas4=0;
        }
        if(z<=pvas3+10 && z>=pvas1-10 && l<=pvas4+10 && l>=pvas2-10)
        {
            Beep(700,80);
            y=-y;
            setcolor(0);
            rectangle(pvas1,pvas2,pvas3,pvas4);
            setfillstyle(1,0);
            floodfill(50,50,9);
            pvas1=0;
            pvas2=0;
            pvas3=0;
            pvas4=0;
        }
        if(z-20<=cirx+9 && l-20<=ciry+9 && z+20>=cirx-9 && l+20>=ciry-9)
        {
            z=650;
            l=150;
            setcolor(9);
            rectangle(630,130,650,170);
            setfillstyle(8,14);
            floodfill(641,136,9);
            Beep(500,400);
            Beep(400,400);
            Beep(600,400);
            setfillstyle(8,0);
            floodfill(641,136,9);
            setcolor(0);
            rectangle(630,130,650,170);
        }
    }
}
    setfillstyle(8,0);
    floodfill(cirx+1,ciry+1,9);
    setcolor(0);
    circle(cirx,ciry,20);
    rectangle(1,1,1265,735);
    setfillstyle(1,0);
    floodfill(1,1,14);
    setcolor(9);
    rectangle(40-1,40-1,1225+1,735+1);
    rectangle(50-1,50-1,1215+1,735+1);
    setfillstyle(3,5);
    floodfill(1,1,9);
    setfillstyle(1,3);
    floodfill(45,45,9);
    setcolor(9);
    rectangle(330,150,930,300);
    setfillstyle(1,3);
    floodfill(331,181,9);
    rectangle(340,160,920,290);
    setfillstyle(3,5);
    floodfill(341,221,9);
    rectangle(370,190,890,260);
    setfillstyle(1,3);
    floodfill(371,201,9);
    settextstyle(4,0,5);
    outtextxy(380,200,"*_*GameOver*_*");
    settextstyle(4,0,2);
    outtextxy(130,650,"Click Q To Exit");
    Beep(900,200);
    Beep(800,200);
    Beep(700,200);
    Beep(600,200);
    Beep(500,200);
    Beep(400,600);
    getch();
    return 1;
}
