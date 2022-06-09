#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<cstring>
#include<fstream>
#include<conio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

using namespace std;

//___________________________CLASS____________________________
//_________________________SIMULATION___________________________

class simulation
{
public:

    //____________________DATA MEMBERS_________________________
    //________________________________________________________

    double PT;
    int EMP1;
    int EMP2;
    double fc;
    int intot;
    double lai;
    int Lfmax;
    int n;
    int nb;
    int p1;
    double PD;
    double rm;
    double sla;
    double tb;
    double w;
    double wc;
    double wr;
    double wf;

    int CN;
    double DP;
    double DRNp;
    double FCp;
    double STp;
    double SWC;
    double WPp;
    double TRAIN;
    double TIRR;
    double TESA;
    double TROF;
    double TDRN;
    double TINF;
    double TEPA;
    double IRR;


    string DATE;
    double PAR;
    double RAIN;
    double SRAD;
    double TMAX;
    double TMIN;


    //__________________________CLASS_________________________
    //_______________________CONSTRUCTOR_______________________


    simulation()
    {
        PT = '0';
        EMP1 = 0;
        EMP2 = '0';
        fc = '0';
        intot = '0';
        lai = '0';
        Lfmax = '0';
        n = '0';
        nb = '0';
        p1 = '0';
        PD = '0';
        rm = '0';
        sla = '0';
        tb = '0';
        w = '0';
        wc = '0';
        wr = '0';

        CN = '0';
        DP = '0';
        DRNp = '0';
        FCp = '0';
        STp = '0';
        SWC = '0';
        WPp = '0';
        IRR = '0';

        DATE = "000";
        PAR = '0';
        RAIN = '0';
        SRAD = '0';
        TMAX = '0';
        TMIN = '0';



    }

public:

    simulation(double PT, double EMP1, int EMP2, double fc, int intot, double lai, int Lfmax, int n, int nb, int p1, double PD, double rm, double sla, double tb, double w, double wc, double wr, int CN, double DP, double DRNp, double FCp, double STp, double SWC, double WPp, int DATE, double PAR, double RAIN, double SRAD, double TMAX, double TMIN)
    {
        this->PT = PT;
        this->EMP1 = EMP1;
        this->EMP2 = EMP2;
        this->fc = fc;
        this->intot = intot;
        this->lai = lai;
        this->Lfmax = Lfmax;
        this->n = n;
        this->nb = nb;
        this->p1 = p1;
        this->PD = PD;
        this->rm = rm;
        this->sla = sla;
        this->tb = tb;
        this->w = w;
        this->wc = wc;
        this->wr = wr;

        this->CN = CN;
        this->DP = DP;
        this->DRNp = DRNp;
        this->FCp = FCp;
        this->STp = STp;
        this->SWC = SWC;
        this->WPp = WPp;

        this->DATE = DATE;
        this->PAR = PAR;
        this->RAIN = RAIN;
        this->SRAD = SRAD;
        this->TMAX = TMAX;
        this->TMIN = TMIN;

    }


    // GETTERS AND SETTERS of PLANT CLASS
    void set_EMP1()
    {
        cout << "EMP1 : ";
        cin >> EMP1;
    }

    int get_EMP1()
    {
        return EMP1;
    }

    void set_EMP2()
    {
        cout << "EMP2 : ";
        cin >> EMP2;
    }

    int get_EMP2()
    {
        return EMP2;
    }

    void set_fc()
    {
        cout << "FC : ";
        cin >> fc;
    }

    double get_fc()
    {
        return fc;
    }

    void set_intot()
    {
        cout << "Intot : ";
        cin >> intot;
    }

    int get_intot()
    {
        return intot;
    }

    void set_lai()
    {
        cout << "Lai : ";
        cin >> lai;
    }

    double get_lai()
    {
        return lai;
    }

    void set_Lfmax()
    {
        cout << "LFMAX : ";
        cin >> Lfmax;
    }

    int get_Lfmax()
    {
        return Lfmax;
    }

    void set_n()
    {
        cout << "n : ";
        cin >> n;
    }

    int get_n()
    {
        return n;
    }

    void set_nb()
    {
        cout << "nb : ";
        cin >> nb;
    }

    int get_nb()
    {
        return nb;
    }

    void set_p1()
    {
        cout << "P1 : ";
        cin >> p1;
    }

    int get_p1()
    {
        return p1;
    }

    void set_PD()
    {
        cout << "PD : ";
        cin >> PD;
    }

    double get_PD()
    {
        return PD;
    }

    void set_rm()
    {
        cout << "RM : ";
        cin >> rm;
    }

    double get_rm()
    {
        return rm;
    }

    void set_sla()
    {
        cout << "SLA : ";
        cin >> sla;
    }

    double get_sla()
    {
        return sla;
    }

    void set_tb()
    {
        cout << "TB : ";
        cin >> tb;
    }

    double get_tb()
    {
        return tb;
    }

    void set_w()
    {
        cout << "w : ";
        cin >> w;
    }

    double get_w()
    {
        return w;
    }

    void set_wc()
    {
        cout << "WC : ";
        cin >> wc;
    }

    double get_wc()
    {
        return wc;
    }

    void set_wr()
    {
        cout << "WR : ";
        cin >> wr;
    }

    double get_wr()
    {
        return wr;
    }

    //GETTERS AND SETTERS OF SOIL CLASS


    void set_CN()
    {
        cout << "CN : ";
        cin >> CN;
    }

    int get_CN()
    {
        return CN;
    }
    
    void set_IRR(){

        cout << "IRR : ";
        cin >> IRR;
    
	}
	double get_IRR(){
		return IRR;
	}

    void set_DP()
    {
        cout << "DP : ";
        cin >> DP;
    }

    int get_DP()
    {
        return DP;
    }

    void set_DRNp()
    {
        cout << "DRNp : ";
        cin >> DRNp;
    }

    double get_DRNp()
    {
        return DRNp;
    }

    void set_FCp()
    {
        cout << "FCp : ";
        cin >> FCp;
    }

    int get_FCp()
    {
        return FCp;
    }

    void set_STp()
    {
        cout << "STp : ";
        cin >> STp;
    }

    double get_STp()
    {
        return STp;
    }

    void set_SWC()
    {
        cout << "SWC : ";
        cin >> SWC;
    }

    int get_SWC()
    {
        return SWC;
    }

    void set_WPp()
    {
        cout << "WPp : ";
        cin >> WPp;
    }

    int get_WPp()
    {
        return WPp;
    }

    //GETTERS AND SETTERS OF WEATHER SOIL CLASS

    void set_DATE()
    {
        cout << "DATE : ";
        cin >> DATE;
    }

    string get_DATE()
    {
        return DATE;
    }

    void set_PAR()
    {
        cout << "PAR : ";
        cin >> PAR;
    }

    double get_PAR()
    {
        return PAR;
    }

    void set_RAIN()
    {
        cout << "RAIN : ";
        cin >> RAIN;
    }

    double get_RAIN()
    {
        return RAIN;
    }

    void set_SRAD()
    {
        cout << "SRAD : ";
        cin >> SRAD;
    }

    double get_SRAD()
    {
        return SRAD;
    }

    void set_TMAX()
    {
        cout << "TMAX : ";
        cin >> TMAX;
    }

    double get_TMAX()
    {
        return TMAX;
    }
    
    void set_TMIN()
    {
        cout << "TMIN : ";
        cin >> TMIN;
    }

    double get_TMIN()
    {
        return TMIN;
    }

};





    //__________________________CLASS_________________________
    //__________________________PLANT___________________________


class plant : public simulation
{
    simulation arry[25];

public:
    double PG;
    double Y1;
    double ROWSPC;
    double SWFAC;
    double dN;
        
           //INITIALIZATION
     


    void outputfile()
    {
        int i = 0;
        ofstream outfile;
        outfile.open("PLANTS.OUT");

        for (i = 0; i < 25; i++)
        {
            outfile << arry[i].EMP1 << endl;
            outfile << arry[i].EMP2 << endl;
            outfile << arry[i].fc << endl;
            outfile << arry[i].intot << endl;
            outfile << arry[i].lai << endl;
            outfile << arry[i].Lfmax << endl;
            outfile << arry[i].n << endl;
            outfile << arry[i].nb << endl;
            outfile << arry[i].p1 << endl;
            outfile << arry[i].PD << endl;
            outfile << arry[i].rm << endl;
            outfile << arry[i].sla << endl;
            outfile << arry[i].tb << endl;
            outfile << arry[i].w << endl;
            outfile << arry[i].wc << endl;
            outfile << arry[i].wr << endl;


        }
        outfile.close();
    }




    void Add()
    {
        set_EMP1();
        set_EMP2();
        set_fc();
        set_intot();
        set_lai();
        set_Lfmax();
        set_n();
        set_nb();
        set_p1();
        set_PD();
        set_rm();
        set_sla();
        set_tb();
        set_w();
        set_wc();
        set_wr();


        int i = 0;
        for (i = 0; i < 25; i++)
        {

            arry[i].EMP1 = EMP1;
            arry[i].EMP2 = EMP2;
            arry[i].fc = fc;
            arry[i].intot = intot;
            arry[i].lai = lai;
            arry[i].Lfmax = Lfmax;
            arry[i].n = n;
            arry[i].nb = nb;
            arry[i].p1 = p1;
            arry[i].PD = PD;
            arry[i].rm = rm;
            arry[i].sla = sla;
            arry[i].tb = tb;
            arry[i].w = w;
            arry[i].wc = wc;
            arry[i].wr = wr;

        }

    }



    //Ratecalculations()



    
    void METHOD_PTS()
    {
        PT = 1 - 0.0025 * pow(((0.25 * TMIN) - (0.75 * TMAX) - 26), 2);

    }

        

    void METHOD_PGS()
    {
        PG = 2.1 * (SRAD / PD) * (1.0 - (exp(-Y1 * lai)));
    }

        

    void METHOD_Y1()
    {
        Y1 = 1.5 - 0.768 * pow((pow(ROWSPC * 0.01, 2) * PD), 0.1);
    }

        

    void METHOD_LAIS()
    {
        double di = tb - (TMAX - TMIN) / 2;
        double dLAI = -PD * di * p1 * sla;
        double a = exp(EMP2 * (n - nb));
        dLAI = SWFAC * PT * PD * EMP1 * dN * (a / (1 + a));

       
        
        
    }

        



    


    void load()
    {
        int i = 0;
        ifstream infile;
        infile.open("PLANT.INP");

        for (i = 0; i < 16; i++)
        {
            infile >> arry[i].EMP1;
            infile >> arry[i].EMP2;
            infile >> arry[i].fc;
            infile >> arry[i].intot;
            infile >> arry[i].lai;
            infile >> arry[i].Lfmax;
            infile >> arry[i].n;
            infile >> arry[i].nb;
            infile >> arry[i].p1;
            infile >> arry[i].PD;
            infile >> arry[i].rm;
            infile >> arry[i].sla;
            infile >> arry[i].tb;
            infile >> arry[i].w;
            infile >> arry[i].wc;
            infile >> arry[i].wr;

            if (infile.eof())
                break;
        }

        infile.close();
    }

    void Display()
    {
        cout << "EMP1\t" << "EMP2\t" << "fc" << "intot\t" << "lai\t" << "Lfmax\t" << "n\t" << "nb\t" << "p1\t" << "PD\t" << "rm\t" << "SLA\t" << "tb\t" << "w\t" << "wc\t" << "wr\t"<<endl;

        for (int i = 0; i < 16; i++)
        {
            cout << arry[i].EMP1 << "\t" << arry[i].EMP2 << "\t";
            cout << arry[i].fc << "\t" << arry[i].intot << "\t";
            cout << arry[i].lai << "\t" << arry[i].Lfmax << "\t";
            cout << arry[i].n << "\t" << arry[i].nb << "\t";
            cout << arry[i].p1 << "\t" << arry[i].PD << "\t";
            cout << arry[i].rm << "\t" << arry[i].sla << "\t";
            cout << arry[i].tb << "\t" << arry[i].w << "\t";
            cout << arry[i].wc << "\t" << arry[i].wr << "\t";
            if(i%16==0){
            	cout<<endl;
			}
        }

    }
};


class SoilWaterClass : public simulation
{
public:
    simulation arry1[25];
public:
    double WP;
    double FC;
    double ST;
    double S;
    double THE;
    double DRN;
    double TRAIN = '0.0';
    double TIRR = '0.0';
    double TESA = '0.0';
    double TEPA = '0.0';
    double TROF = '0.0';
    double TDRN = '0.0';
    double TINF = '0.0';
    double IRR;
    double POINTF;
    double EPp;
    double ESa;
    double SWC_ADJ = 33;


    SoilWaterClass()
    {
        CN = '0';
        DP = '0';
        DRNp = '0';
        FCp = '0';
        STp = '0';
        SWC = '0';
        WPp = '0';
        WP = DP * WPp * 10.0;
        FC = DP * FCp * 10.0;
        ST = DP * STp * 10.0;
        IRR = '0';
        TINF = POINTF - TROF;
    }

    SoilWaterClass(int CN, double DP, double DRNp, double FCp, double STp, double SWC, double WPp)
    {
        this->CN = CN;
        this->DP = DP;
        this->DRNp = DRNp;
        this->FCp = FCp;
        this->STp = STp;
        this->SWC = SWC;
        this->WPp = WPp;
    }
    


    //INITIALIZATION

	void compute_SWC(){
		SWC += (TINF - ESa -EPp - DRN); 

	}
	void updateROF(){
		if(SWC > ST){
			TROF += (SWC - ST);
			SWC = ST;
		}
	}
	void computeSWC_ADJ(){
		
		if(SWC<0){
			SWC_ADJ -= SWC;
			SWC = 0;
		}
	}
	void STRESS2(){
		double SWFAC1 = 1.0;
		if (SWC < WP){
			SWFAC1 = 0.0;
		}else if(SWC > THE) {
			SWFAC1 = 1.0;
		}else{
			SWFAC1 = (SWC - WP) / (THE - WP);
			SWFAC1 = max(min(SWFAC1, 1.0), 0.0);
		}
			  
	}

    void outputfile()
    {
        int i = 0;
        ofstream outfile;
        outfile.open("SW.OUT");

        for (i = 0; i < 25; i++)
        {
            outfile << arry1[i].CN << endl;
            outfile << arry1[i].DP << endl;
            outfile << arry1[i].DRNp << endl;
            outfile << arry1[i].FCp << endl;
            outfile << arry1[i].STp << endl;
            outfile << arry1[i].SWC << endl;
            outfile << arry1[i].WPp << endl;
            
        }
        outfile.close();
    }


    void METHOD_RUNOFF()
    {
        S = 254 * (100 / CN - 1);
    }

    void STRESS()
    {
        THE = WP + 0.75 * (FC - WP);
    }



    void Add()
    {
        set_CN();
        set_DP();
        set_DRNp();
        set_FCp();
        set_STp();
        set_SWC();
        set_WPp();
      
       
        int i = 0;
        for (i = 0; i < 25; i++)
        {
            arry1[i].CN = CN;
            arry1[i].DP = DP;
            arry1[i].DRNp = DRNp;
            arry1[i].FCp = FCp;
            arry1[i].STp = STp;
            arry1[i].SWC = SWC;
            arry1[i].WPp = WPp;
            
        }

    }


    //RATE CALCULATIONS

    void METHOD_DRAINE()
    {
        DRN = (SWC - FC) * DRNp;

       
    }

   void METHOD_ROF()
    {
        if (POINTF > 0.2 * S)
        {
            TROF = ((POINTF - 0.2 * S) *2) / (POINTF + 0.8);

        }
        else
        {
           TROF = 0;
        }
    }

   void METHOD_ETpS()
   {
       double ALB;
       double Tmed;
       double EEQ;
       double ETp;
       double ESp;


       ALB = 0.1 * exp(-0.7 * lai) + 0.2 * (1 - exp(-0.7 * lai));
       Tmed = 0.6 * TMAX + 0.4 * TMIN;
       EEQ = SRAD * ((4.88 * 2.71) - 0.3) - (4.37 * 2.71) - (0.3 * ALB) * (Tmed + 29);
       ESp = ETp * exp(-0.7 * lai);
       EPp = ETp * (1 - exp(-0.7 * lai));
   }

   void METHOD_ESaS()
   {
       double a;
       double ESp;
       if (SWC < WP)
       {
           a = 0;
       }
       else if (SWC > FC)
       {
           a = 1;
       }
       else
           a = (SWC - WP) / (FC - WP);

           ESa = ESp * a;
   }





   void load()
   {
       int i = 0;
       ifstream infile;
       infile.open("SOIL.INP");

       for (i = 0; i < 25; i++)
       {
           infile >> arry1[i].CN;
           infile >> arry1[i].DP;
           infile >> arry1[i].DRNp;
           infile >> arry1[i].FCp;
           infile >> arry1[i].STp;
           infile >> arry1[i].SWC;
           infile >> arry1[i].WPp;
           
           if (infile.eof())
               break;
       }

       infile.close();
   }

   void load1()
   {
       int i = 0;
       ifstream infile;
       infile.open("IRRIG.INP");

       for (i = 0; i < 7; i++)
       {
           infile >> arry1[i].TRAIN;
           infile >> arry1[i].TIRR;
           infile >> arry1[i].TESA;
           infile >> arry1[i].TEPA;
           infile >> arry1[i].TROF;
           infile >> arry1[i].TDRN;
           infile >> arry1[i].TINF;

           if (infile.eof())
               break;
       }

       infile.close();
   }

   void Display()
   {
       cout << "CN\t" << "DP\t" << "DRNp\t" << "FCp\t" << "STp\t" << "SWC\t" << "WPp\t"<<endl;

       for (int i = 0; i < 7; i++)
       {
           cout << arry1[i].CN << "\t" << arry1[i].DP << "\t";
           cout << arry1[i].DRNp << "\t" << arry1[i].FCp << "\t";
           cout << arry1[i].STp << "\t" << arry1[i].SWC << "\t";
           cout << arry1[i].WPp << "\t\n";

           
       }

   }

   



};


class WeatherClass : public simulation
{
    simulation arry2[25];

public:
    WeatherClass()
    {
        DATE = "00";
        PAR = '0';
        RAIN = '0';
        SRAD = '0';
        TMAX = '0';
        TMIN = '0';
        WPp = '0';
    }

    WeatherClass(string DATE, double PAR, double RAIN, double SRAD, double TMAX, double TMIN)
    {
        this->DATE = DATE;
        this->PAR = PAR;
        this->RAIN = RAIN;
        this->SRAD = SRAD;
        this->TMAX = TMAX;
        this->TMIN = TMIN;
    }


    void load()
    {
        int i = 0;
        ifstream infile;
        infile.open("WEATHER.INP");

        for (i = 0; i < 6; i++)
        {
            infile >> arry2[i].DATE;
            infile >> arry2[i].PAR;
            infile >> arry2[i].RAIN;
            infile >> arry2[i].SRAD;
            infile >> arry2[i].TMAX;
            infile >> arry2[i].TMIN;

            if (infile.eof())
                break;
        }

        infile.close();
    }

    void Display()
    {
        cout << "DATE\t" << "PAR" << "\tRAIN" << "\tSRAD" << "\tTMAX" << "\tTMIN\n";

        for (int i = 0; i < 6; i++)
        {
            cout << arry2[i].DATE << "\t" << arry2[i].PAR << "\t";
            cout << arry2[i].RAIN << "\t" << arry2[i].SRAD << "\t";
            cout << arry2[i].TMAX << "\t" << arry2[i].TMIN << "\t\n";


        }

    }
    
    void Add(){
    	set_DATE();
    	set_PAR();
    	set_RAIN();
    	set_SRAD();
    	set_TMAX();
    	set_TMIN();
	}




};

void clearScreen()
  {
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  /* Get the number of cells in the current buffer */
  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Fill the entire buffer with the current colors and attributes */
  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Move the cursor home */
  SetConsoleCursorPosition( hStdOut, homeCoords );
  }


int main()
{

	int choice1; 
	int choice2;
	
	//creating instances of all three classes
	plant *plant1 			= new plant();
	SoilWaterClass *sw 		= new SoilWaterClass();
	WeatherClass *weather	= new WeatherClass();

	while(true){
	clearScreen();
	    cout<<"          ****************" <<" Plant Simulation Project "<<"**********************"<<endl;
	    cout<<"          *****************************************************************";
	    cout<<endl;
	    cout<<endl;
		
		cout<< "Please pick one option:" << endl;
		cout<< "1. Initialize classes." << endl;
		cout<< "2. Calculate rates." << endl;
		cout<< "3. Integration." << endl;	
		cout<< "4. Display daily output." << endl;
		cout<< "5. Summary after simulation." << endl;
		cout<< "6. Exit" << endl;
		
		cin >> choice1;//taking user imput for the action that needs to be performed
		clearScreen();
		
		switch(choice1){
			case 1:
				//initializing the attributes of the instances of all three classes
				//to user input values
				
				cout<<"Initializing plant class"<<endl;
				cout<<endl;
				plant1->Add();
				clearScreen();
				plant1->load();
				plant1->outputfile();
				clearScreen;
				
				cout<<"Initializing Soil Water class"<<endl;
				cout<<endl;
				sw->Add();
				clearScreen();
				sw->load();
				sw->load1();
				sw->outputfile();
				clearScreen;
				
				cout<<"Initializing weather class"<<endl;
				cout<<endl;
				weather->Add();
				clearScreen();
				weather->load();
				clearScreen;
				
				continue;
				
			case 2:{
				
				//calculating rates for plant class and writing data in the output file
				plant1->METHOD_PTS();
				plant1->METHOD_PGS();
				plant1->METHOD_LAIS();
				plant1->METHOD_Y1();
				plant1->outputfile();
				clearScreen();
				
				//calculating rates for soil water and writing data in the output file
				sw->METHOD_DRAINE();
				sw->POINTF = sw->get_RAIN()+sw->get_IRR();
				
				sw->METHOD_RUNOFF();
				if(sw->POINTF>0){
					sw->METHOD_RUNOFF();
				}
				sw->TINF = sw->POINTF - sw->TROF;
				sw->TINF = sw->POINTF - sw->TROF;
				sw->METHOD_ETpS();
				sw->METHOD_ESaS();
				sw->outputfile();
				
				clearScreen();
				string x;
				cout<<"Rates were calculated for all three classes. press any key to continue.";
				cin >> x;
				continue;
			}
				
			case 3:{
				//integrating plant class
				plant1->lai *= 1.1;
				plant1->w *= 1.1;
				plant1->wc *= 1.1;
				plant1->wr *= 1.1;
				plant1->n *= 1.1;
				
				if(plant1->n == plant1->get_intot()){
					cout<<"Plant has matured. Simulation is complete."<<endl;
					
					return 0;
				}
				
				//INTEgrating soil water class
				sw->compute_SWC();
				sw->updateROF();
				sw->computeSWC_ADJ();
				sw->STRESS();
				sw->STRESS2();
				
				double WTABLE = (sw->SWC-sw->FC)/(sw->ST-sw->FC)*sw->DP*10;
				double DWT = sw->DP*10 - WTABLE;
				double SWFAC2 = 0.0;
				double STRESS_DEPTH = 250;
				
				if (DWT > STRESS_DEPTH){
					SWFAC2 = 1.0;	
				}else{
					SWFAC2 = DWT / STRESS_DEPTH ;
				}
 					
				
				string c;
				cout << "Integration successful. press any key to continue."<<endl;
				cin>>c;
				
				continue;
				
			}
				
				
			case 4:{
				
				cout<< "Please pick the class for which the information needs to be displayed:" << endl;
				cout<< "1. Plant class." << endl;
				cout<< "2. Soil Water class." << endl;
				cout<< "3. Weather class." << endl;	

				
				cin >> choice2;//taking user imput for the action that needs to be performed
				clearScreen();
				string choice3;
				switch(choice2){
					case 1:
						plant1->Display();
						cout<<"\n\nPress any key to continue."<<endl;
						cin >> choice3;
						continue;
					case 2:
						sw->Display();
						cout<<"\n\nPress any key to continue."<<endl;
						cin >> choice3;
						continue;
					case 3:
						weather->Display();
						cout<<"\n\nPress any key to continue."<<endl;
						cin >> choice3;
						break;
						
				}
				continue;
			}
			
			case 5:
				{
				clearScreen();
				string choice3;
					    cout<<" Summary : "<<endl;
						plant1->Display();
					    cout<<endl;
					    cout<<endl;
					
						sw->Display();
						cout<<endl;
						cout<<endl;
					
						weather->Display();
						cout<<"\n\nPress any key to continue."<<endl;
						cin >> choice3;
						break;
				}
				
			case 6:
				cout<<"Thank You!"<<endl;
				return 0;
		}
			
	}
	
}
