/*
  author : kaushal,chirag,chetan,ashish
  created : 26/11/2020

  uncomment the lines to debug the code | particular memonic | eg line no 245 
*/
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string>opcode;
unordered_map<string, string>reg;
unordered_map<string, string>ptr;
void opcodes()
{
    opcode["MRR"] = "00000000";
    opcode["MRM"] = "00000001";
    opcode["MRD"] = "00000010";
    opcode["MMR"] = "00000011";
    opcode["MPR"] = "00000100";
    opcode["MRP"] = "00000101";
    opcode["OAD"] = "00000110";
    opcode["OSB"] = "00000111";
    opcode["OAN"] = "00001000";
    opcode["OOR"] = "00001001";
    opcode["OXR"] = "00001010";
    opcode["OMD"] = "00001011";
    opcode["INC"] = "00001100";
    opcode["DEC"] = "00001101";
    opcode["CLS"] = "00001110";
    opcode["CRS"] = "00001111";
    opcode["JIZ"] = "00010000";
    opcode["CMN"] = "00010001";
    opcode["XCH"] = "00010010";
    opcode["GTO"] = "00010011";
    opcode["HLT"] = "00010100";
    opcode["BGC"] = "00011011";
    
}
void registers()
{
    reg["R1"] = "00000001";
    reg["R2"] = "00000010";
    reg["R3"] = "00000011";
    reg["R4"] = "00000100";
    reg["R5"] = "00000101";
    reg["R6"] = "00000110";
    reg["R7"] = "00000111";
    reg["R8"] = "00001000";
}

void pointers()
{
    ptr["P1"] = "11110001";
    ptr["P2"] = "11110010";
    ptr["P3"] = "11110011";
    ptr["P4"] = "11110100";
    ptr["P5"] = "11110101";
    ptr["P6"] = "11110110";
    ptr["P7"] = "11110111";
    ptr["P8"] = "11111000";
}

void initialiseMaps()
{
    opcodes();
    registers();
    pointers();
}
string slicer(string &S, int s, int e)
{
    string ans="";
    for(int i=s;i<e;i++)
    {
        ans.push_back(S[i]);
    }
    return ans;
}

int strTOint(string &s)
{
    int ans=0;
    int i=0, n = s.size();
    for(i=0;i<n;i++)
    {
        int t;
        t =  s[i] - '0';
        if(t==32)
            t = 0;
        else if(t<0 && t>9)
        {
            return -1;
        }
        ans += t;
        ans = ans*10;
    }
    return ans/10;
}
bool checkreg(char s1)
{
  int i1=s1-48;
  
  if(i1 && i1<9)//8 registers
    return true;
  return false;

}

bool checklen(string &s, int n)
{ return s.size()==n;}
bool checkmem(string s)
{
  int memm= strTOint(s);
  if(memm && memm < 128)
    return true;
  return false;
}
bool check_reg_reg(string &s)
{ //MRR,OAD,OSB,OAN,OOR,OXR,OMD,XCH
  if(s == "MRR" || s =="OAD" || s=="OSB" || s=="OAN" || s=="OOR" || s=="OXR" || s=="OMD" || s=="XCH")
    return true;
  return false;
}
bool checkmem100(string s) // hunderth place
{
  int memm= strTOint(s);
  if(memm >99 && memm < 128)
    return true;
  return false;
}
bool checkmem10(string s) // tens place
{
  int memm= strTOint(s);
  if(memm >9 && memm < 100)
    return true;
  return false;
}
bool checkmem1(string s)//ones place
{
  int memm= strTOint(s);
  if(memm >0 && memm < 10)
    return true;
  return false;
}
string decToBinary1(int n)
{
  string ans="1";
    // array to store binary number
    int binaryNum[7];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int j = i ; j< 7 ; j++)
        binaryNum[j]=0;


    for (int j = 6; j >= 0; j--)
       {
        char x= binaryNum[j]+48;
        ans.push_back(x);
       }
       return ans;
}

string decToBinary0(int n)
{
  string ans="0";
    // array to store binary number
    int binaryNum[7];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(int j = i ; j< 7 ; j++)
        binaryNum[j]=0;


    for (int j = 6; j >= 0; j--)
       {
        char x= binaryNum[j]+48;
        ans.push_back(x);
       }
       return ans;
} 
int main()
{
    ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    #endif

    
    //initialising maps
    initialiseMaps();
    //creating memory to display
    vector<string>memory;
    string memvalue="00000000";
    for(int i=0;i<256;i++)
    {
        memory.push_back(memvalue);
    }
    string lit1, lit2, lit3, val1, val2, val3;
    int program_counter;
    int LocationCounter=256;                  
    string s;
    bool flag = false;
    int error_line_no = 0;
    while(getline(cin, s))
    { error_line_no++;
      //check locationcounter
      int len = s.size();

        lit1 = slicer(s, 0, 3);
        if(opcode.count(lit1)==0)// wrong memonics
        {
          flag=true;
          break;
        }
        //BGC
        if(lit1.compare("BGC")==0)
        {
            int en = s.size();
            lit2 = slicer(s, 4, en);
            LocationCounter = strTOint(lit2);
            program_counter= LocationCounter; 

           // cout<<LocationCounter;
        }
        //HLT
        else if(lit1.compare("HLT")==0)
        {
            break;
        }
        else 
        {
            //lit1 has the nature of 2 register , eg and or xor
            //MRR,OAD,OSB,OAN,OOR,OXR,OMD,XCH
            if(s[6]==' ' && s[3]==' ' && check_reg_reg(lit1) && s[4]=='R' && s[7]=='R' && checkreg(s[5]) && checkreg(s[8]) && checklen(s,9))
            {   //cout<< s<<" correct memonic"<<endl;//debug
              
            
                    lit2 = slicer(s, 4, 6);
                    lit3  = slicer(s, 7, 9);
                    val1 = opcode[lit1];
                memory[LocationCounter++] = val1;
                    val2 = reg[lit2];
                    memory[LocationCounter++] = val2;
                    val3 = reg[lit3];
                    memory[LocationCounter++] = val3;
                    
                
            }
         //lit1 has the nature of 1 register eg inc ,dec
            //INC,DEC,CLS,CRS,CMN in register
            else if(s[4]=='R' && checkreg(s[5]) && checklen(s,6) && s[3]==' ')
            { // cout<< s<<" correct memonic:"<<endl;//debug
              lit2= slicer(s,4,6);
               val1 = opcode[lit1];
              memory[LocationCounter++] = val1;
                 val2 = reg[lit2];
                memory[LocationCounter++] = val2;
                LocationCounter++;

            }
            // INC , DEC  in pointers
            else if(s[4]=='P' && checkreg(s[5]) && checklen(s,6) && s[3]==' ') // inc dec in ptr
            {   //cout<< s<<" correct memonic:"<<endl;//debug
              lit2= slicer(s,4,6);
               val1 = opcode[lit1];
              memory[LocationCounter++] = val1;
                 val2 = ptr[lit2];
                memory[LocationCounter++] = val2;
                LocationCounter++;
            }
            //MRM
            else if (lit1=="MRM" && s[4]=='R' && checkreg(s[5]) && checkmem(slicer(s,7,len)) && s[3]==' ' && s[6]==' ')//MRM R9 9
            {  //cout<< s<<" correct memonic:"<<endl;//debug
              lit2 = slicer(s, 4, 6);
                lit3  = slicer(s, 7, len);
                val1 = opcode[lit1];
            memory[LocationCounter++] = val1;
                val2 = reg[lit2];
                memory[LocationCounter++] = val2;

                //val3=string->dec->binary_string
                int decimal=strTOint(lit3);
                if(decimal==-1)
                    {
                        flag = false;
                        break;
                    }
                val3=decToBinary1(decimal);
                
                //val3 = reg[lit3];
                memory[LocationCounter++] = val3;
            }
            //MPR
            else if(lit1=="MPR" && s[4]=='P' && s[7]=='R'&& checkreg(s[5]) && checkreg(s[8]) && s[3]==' ' && s[6]==' ')
            {  // cout<< s<<" correct memonic:"<<endl;//debug
            lit2=slicer(s,4,6);
            lit3=slicer(s,7,9);
            memory[LocationCounter++]=opcode[lit1];
            memory[LocationCounter++]=ptr[lit2];
            memory[LocationCounter++]=reg[lit3];

            }
            //MRP
            else if(lit1=="MRP" && s[4]=='R' && s[7]=='P'&& checkreg(s[5]) && checkreg(s[8]) && s[3]==' ' && s[6]==' ' )
            {   //cout<< s<<" correct memonic:"<<endl;//debug
            lit2=slicer(s,4,6);
            lit3=slicer(s,7,9);
            memory[LocationCounter++]=opcode[lit1];
            memory[LocationCounter++]=reg[lit2];
            memory[LocationCounter++]=ptr[lit3];

            }
            //MMR
            else if(lit1=="MMR")            
            {
              //case 1 address huderedth digit
              if( s[7]==' ' && s[8]=='R' && checkreg(s[9]) && checkmem100(slicer(s,4,7))&& s[3]==' ')//MMR 127 R1 
              {//cout<< s<<" correct memonic:"<<endl;//debug
                lit2 = slicer(s, 4, 7);//address
                lit3  = slicer(s, 8, len);//reg
                val1 = opcode[lit1];
              memory[LocationCounter++] = val1;

              int decimal=strTOint(lit2);
          if(decimal==-1)
           {
             flag=false;
             break;
           }
                  val2=decToBinary1(decimal);
                
                  //val3 = reg[lit3];
                  memory[LocationCounter++] = val2;

                  val3 = reg[lit3];
          memory[LocationCounter++] = val3;
          
          
              }
              //case2  address tens digit
              else if( s[6]==' ' && s[7]=='R' && checkreg(s[8]) && checkmem10(slicer(s,4,6))&& s[3]==' ')//MMR 12 R1
              {//cout<< s<<" correct memonic:"<<endl;//debug
                lit2 = slicer(s, 4, 6);//address
                lit3  = slicer(s, 7, len);//reg
                val1 = opcode[lit1];
              memory[LocationCounter++] = val1;

              int decimal=strTOint(lit2);
          if(decimal==-1)
           {
             flag=false;
             break;
           }
                  val2=decToBinary1(decimal);
                
                  //val3 = reg[lit3];
                  memory[LocationCounter++] = val2;

                  val3 = reg[lit3];
          memory[LocationCounter++] = val3;

              }
              //case3 adress ones digit
              else if(s[5]==' ' && s[6]=='R' && checkreg(s[7]) && checkmem1(slicer(s,4,5))&& s[3]==' ')//MMR 1 R1
              {//cout<< s<<" correct memonic:"<<endl;//debug
                lit2 = slicer(s, 4, 5);//address
                lit3  = slicer(s, 6, len);//reg
                val1 = opcode[lit1];
              memory[LocationCounter++] = val1;

              int decimal=strTOint(lit2);
          if(decimal==-1)
           {
             flag=false;
             break;
           }
                  val2=decToBinary1(decimal);
                
                  //val3 = reg[lit3];
                  memory[LocationCounter++] = val2;

                  val3 = reg[lit3];
          memory[LocationCounter++] = val3;

              }
              else
              {
                flag= true;
                break;
              }


            }
            //MRD
            else if(lit1=="MRD")
            {
              //case 1 MRD R1 -12 //negative valuee   10001010
              if( s[4]=='R' && checkreg(s[5]) &&  s[7]=='-' && checkmem(slicer(s,8,len))&& s[3]==' ' && s[6]==' ')
              { //cout<< s<<" correct memonic:"<<endl;//debug
                lit2 = slicer(s, 4, 6);
                  lit3  = slicer(s, 8, len);
                  val1 = opcode[lit1];
              memory[LocationCounter++] = val1;
                  val2 = reg[lit2];
                  memory[LocationCounter++] = val2;

                  //val3=string->dec->binary_string
                  int decimal=strTOint(lit3);
            if(decimal==-1)
           {
             flag=false;
             break;
           }
                  val3=decToBinary1(decimal);
                  
                  //val3 = reg[lit3];
                  memory[LocationCounter++] = val3;

              }
              //case 2 MRD R1 12 //positve value   00001010
              else if( s[4]=='R' && checkreg(s[5]) && checkmem(slicer(s,7,len)) && s[3]==' ' && s[6]==' ')
              { //cout<< s<<" correct memonic:"<<endl;//debug
                lit2 = slicer(s, 4, 6);
                  lit3  = slicer(s, 7, len);
                  val1 = opcode[lit1];
              memory[LocationCounter++] = val1;
                  val2 = reg[lit2];
                  memory[LocationCounter++] = val2;

                  //val3=string->dec->binary_string
                  int decimal=strTOint(lit3);
            if(decimal==-1)
           {
             flag=false;
             break;
           }
                  val3=decToBinary0(decimal);
                  
                  //val3 = reg[lit3];
                  memory[LocationCounter++] = val3;
              }

              //case 3 MRD P1 12 //pointer   10001010
              else if( s[4]=='P' && checkreg(s[5]) && checkmem(slicer(s,7,len)) && s[3]==' ' && s[6]==' ')
              {//cout<< s<<" correct memonic:"<<endl;//debug
                lit2 = slicer(s, 4, 6);
                  lit3  = slicer(s, 7, len);
                  val1 = opcode[lit1];
              memory[LocationCounter++] = val1;
                  val2 = ptr[lit2];
                  memory[LocationCounter++] = val2;

                  //val3=string->dec->binary_string
                  int decimal=strTOint(lit3);
            if(decimal==-1)
           {
             flag=false;
             break;
           }
                  val3=decToBinary1(decimal);
                  
                  //val3 = reg[lit3];
                  memory[LocationCounter++] = val3;

              }
              else
              {
                flag= true;
                break;
              }
            }
            //GTO
            else if( lit1=="GTO" && checkmem(slicer(s,4,len)) && s[3]==' ')
            { //cout<< s<<" correct memonic:"<<endl;//debug
            lit2 = slicer(s,4,len);

            val1 = opcode[lit1];
              memory[LocationCounter++] = val1;


              int decimal=strTOint(lit2);
           if(decimal==-1)
           {
             flag=false;
             break;
           }
                val2=decToBinary0(decimal);
                memory[LocationCounter++] = val2;
                LocationCounter++;
            }
            else
            {
              flag= true;
              break;
            }
        }     
    }          
    
    
    if(flag)
    {
      cout<<"LINE:"<<error_line_no<<" ERROR : WRONG MEMONIC->"<<s<<endl;
      cout<<"\nMEMORY:\nLC   VALUE\n";
      for(int i=0 ; i<memory.size();i++)
      cout<<i<<" "<<"00000000"<<endl;
    }
    else
    {cout<<"ALL MEMONICS ARE CORRECT :) \n\nMEMORY:\nLC   VALUE\n";int count=0;
      for(int i=0 ; i<memory.size();i++)
      { 
        cout<<i<<" "<<memory[i]<<endl; count++;

    }
  } 
    return 0;
}