int lpin = 13;
int j;
char a[50] = {'H','E','L','L','O'};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


for(j=0;a[j]!='\n';j++)
{
  if(a[j] == 'A' || a[j] == 'a')
  {
    Aword();
  }
  else if(a[j] == 'B' ||a[j] == 'b')
  {
    Bword();
  }
  else if(a[j] == 'C' || a[j] == 'c')
  {
    Cword();
  }
  else if(a[j] == 'D' || a[j] == 'd')
  {
    Dword();
  }
  else if(a[j] == 'E' || a[j] == 'e')
  {
    Eword();
  }
  else if(a[j] == 'F' || a[j] =='f')
  {
    Fword();
  }
  else if(a[j] == 'G' || a[j] == 'g')
  {
    Gword();
  }
  else if(a[j] == 'H' || a[j] == 'h')
  {
    Hword();
  }
  else if(a[j] == 'I' || a[j] == 'i')
  {
    Iword();
  }
  else if(a[j] == 'J' || a[j] == 'j')
  {
    Jword();
  }
  else if(a[j] == 'K' || a[j] == 'k')
  {
    Kword();
  }
  else if(a[j] == 'L' || a[j] == 'l')
  {
    Lword();
  }
  else if(a[j] == 'M' || a[j] == 'm')
  {
    Mword();
  }
  else if(a[j] == 'N' || a[j] == 'n')
  {
    Nword();
  }
  else if(a[j] == 'O' || a[j] == 'o')
  {
    Oword();
  }
  else if(a[j] == 'P' || a[j] == 'p')
  {
    Pword();
  }
  else if(a[j] == 'Q' || a[j] == 'q')
  {
    Qword();
  }
  else if(a[j] == 'R' || a[j] == 'r')
  {
    Rword();
  }
  else if(a[j] == 'S' || a[j] == 's')
  {
    Sword();
  }
  else if(a[j] == 'T' || a[j] == 't')
  {
    Tword();
  }
  else if(a[j] == 'U' || a[j] == 'u')
  {
    Uword();
  }
  else if(a[j] == 'V' || a[j] == 'v')
  {
    Vword();
  }
  else if(a[j] == 'W' || a[j] == 'w')
  {
    Wword();
  }
  else if(a[j] == 'X' || a[j] == 'x')
  {
    Xword();
  }
  else if(a[j] == 'Y' || a[j] == 'y')
  {
    Yword();
  }
  else if(a[j] == 'Z' || a[j] == 'z')
  {
    Zword();
  }
}

}

void longtime()
 {
   digitalWrite(lpin,HIGH);
   delay(1000);
   digitalWrite(lpin,LOW);
   delay(900);
 }
void shorttime()
 {
  digitalWrite(lpin,HIGH);
  delay(500);
  digitalWrite(lpin,LOW);
  delay(200);
 }
void Aword()
{
  int i;
  for(i=0;i<2;i++)
  {
    if(i==0)
    {
    shorttime();
    }
   else
    {
    longtime();
    }
  }
}
void Bword()
{
  int i;
   for(i=0;i<4;i++)
   {
    if(i==0)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
   }
}
void Cword()
{
  int i;
   for(i=0;i<4;i++)
   {
    if(i==0||i==2)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
}
void Dword()
{
  int i;
   for(i=0;i<3;i++)
   {
     if(i==0)
      {
      longtime();
      }
     else
     {
      shorttime();
     }
   }
}
 void Eword()
 {
  int i;
  for(i=0;i<1;i++)
  {
    shorttime();
  }
 }
 void Fword()
 {  
  int i;
  for(i=0;i<4;i++)
  {
    if(i==3)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
 }
 void  Gword()
 {
  int i;
  for(i=0;i<3;i++)
  {
    if(i==2)
    {
      shorttime();
    }
    else
    {
      longtime();
    }
  }
 }
void Hword()
{
  int i;
  for(i=0;i<4;i++)
  {
  shorttime();
  }
}
void Iword()
 {
  int i;
  for(i=0;i<2;i++)
  {
  shorttime();
  }
 }
void Jword()
{
  int i;
for(i=0;i<4;i++)
{
  if(i==0)
  {
    shorttime();
  }
  else 
  {
    longtime();
  }
 }
}
void Kword()
{
  int i;
  for(i=0;i<3;i++)
  {
   if(i==1)
   {
     shorttime();
   }
   else
   {
    longtime();
   }
  }
}
void Lword()
{
  int i;
  for(i=0;i<4;i++)
  {
    if(i==2)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
}
void Mword()
{
  int i;
 for(i=0;i<2;i++)
 {
  longtime();
 }
}
void Nword()
{
  int i;
  for(i=0;i<2;i++)
  {
   if(i==0)
   {
     longtime();
   }
   else
   {
     shorttime();
   }
  }
}
 void Oword()
 {
  int i;
  for(i=0;i<3;i++)
   {
    longtime();
   }
 }
 void Pword()
{
  int i;
  for(i=0;i<4;i++)
  {
    if(i==0||i==3)
    {
      shorttime();
    }
    else
    {
      longtime();
    }
  }
}
 void Qword()
 {
  int i;
  for(i=0;i<4;i++)
  {
    if(i==3)
   {
     shorttime();
   }
    else
   {
     longtime();
   }
  }
}
void Rword()
{
  int i;
  for(i=0;i<3;i++)
  {
   if(i==1)
   {
     longtime();
   }
   else
   {
     shorttime();
   }
 }
}
 void Sword()
{
  int i;
  for(i=0;i<3;i++)
  {
   shorttime();
  }
}
void Tword()
{
  int i;
  for(i=0;i<1;i++)
  {
   longtime();
  }
}
void Uword()
{
  int i;
  for(i=0;i<3;i++)
  {
    if(i==2)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
}
void Vword()
{
  int i;
  for(i=0;i<4;i++)
  {
    if(i==3)
   {
     longtime();
   }
    else
   {
     shorttime();
   }
 }
}
void Wword()
{
  int i;
  for(i=0;i<3;i++)
  {
    if(i==0)
    {
      shorttime();
    }
    else
    {
      longtime();
    }
  }
}
void Xword()
{
  int i;
  for(i=0;i<4;i++)
  {
    if(i==1||i==2)
    {
      shorttime();
    }
    else
   {
    longtime();
   }
  }
}
void Yword()
{
  int i;
  for(i=0;i<4;i++)
   {
    if(i==1)
    {
    shorttime();
    }
    else
    {
    longtime();
    }
  }
}
void Zword()
{
  int i;
  for(i=0;i<3;i++)
  {
    if(i==2)
    {
    shorttime();
    }
   else
    {
    longtime();
    }
  }
}
