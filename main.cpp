#include<windows.h>
#include<bits/stdc++.h>
#include <GL/glut.h>
#define PI acos(-1.0)  // 3.1415926535897932

using namespace std;


///////building max min//////////
double AA[4][4]=
{
    {30,60,0,24},
    {60,90,30,24},
    {140,130,60,24},
    {200,100,140,24}


};
////////////////////////////


////////////////////RGB///////////////

double A[4][2][3] =
{
    {
        {
            74,35,90
        },
        {
            165,105,189
        }
    },


    {
        {
            120,66,18
        },
        {
            230,126,34
        }
    },

    {
        {
            27,38,49
        },
        {
            44,62,80
        }
    },



    {
        {
            11,83,69
        },
        {
            69,179,157
        }
    }

};




void init(void)
{
    glClearColor(102.0/255.0, 178.0/255.0, 254.0/255.0, 0.0);	// Set display window colour to white
    glMatrixMode(GL_PROJECTION);      // Select the Projection matrix for operation
    glLoadIdentity();   		// Set projection parameters
    gluOrtho2D(0,200, 0,200);
}










void Mohammad_Farhan_Sadik(void)
{

        glClear(GL_COLOR_BUFFER_BIT);



        double R = 4,
               G = 5,
               B = 7 ;
        for(double i = 200 ; i >= 60 ; i-=.01)
        {
            R+=((21-4)/(140/.01));
            G+=((68-5)/(140/.01));
            B+=((137-7)/(140/.01));

            glColor3f( R /255.0, G /255.0, B /255.0);
            glBegin(GL_LINES);
            glVertex2d(0,i);
            glVertex2d(200,i);
            glEnd();
        }

        double SA[5][2]= {{0,0}, {-0.11,0.08}, {0.15,0.08}, {-0.13,-0.11}, {0.1,-0.16}};
        for(int i = 0 ; i < 100 ; i++)
        {
            double x = rand()%200;
            double y = rand()%200;
            //cout << x << " " << y << endl;
            glColor3f(1,1,1);
            for(int j = 0 ; j < 5 ; j ++)
            {
                glBegin(GL_POINTS);
                glVertex2d(x+SA[j][0],y+SA[j][1]);
                glEnd();
                glColor3f(240/255.0,240/255.0,240/255.0);
            }
        }



        //Road

        glColor3f(0.0/255.0, 0.0/255.0, 0.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(200,0);
        glVertex2f(200,20);
        glVertex2f(0,20);

        glEnd();

        //white stripe

        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2f(0,8);
        glVertex2f(200,8);
        glVertex2f(200,10);
        glVertex2f(0,10);

        glEnd();


        //grass


        glColor3f(86.0/255.0, 176.0/255.0, 0);
        glBegin(GL_POLYGON);
        glVertex2f(0,20);
        glVertex2f(200,20);
        glVertex2f(200,24);
        glVertex2f(0,24);

        glEnd();

        ////grass border

        glColor3f(0.0/255.0, 0.0/255.0, 0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(0,20);
        glVertex2f(200,20);
        glVertex2f(200,24);
        glVertex2f(0,24);

        glEnd();


        ////building start
        glColor3f(245.0/255.0, 203.0/255.0, 167.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(0,24);
        glVertex2f(30,24);
        glVertex2f(30,60);
        glVertex2f(0,60);

        glEnd();

        ////B1 broder
        glColor3f(0.0/255.0,0.0/255.0, 0.0/255.0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(0,24);
        glVertex2f(30,24);
        glVertex2f(30,60);
        glVertex2f(0,60);

        glEnd();



        glColor3f(39.0/255.0, 174.0/255.0, 96.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(30,24);
        glVertex2f(60,24);
        glVertex2f(60,90);
        glVertex2f(30,90);

        glEnd();

        ////b2 border

        glColor3f(0/255.0, 0/255.0, 0/255.0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(30,24);
        glVertex2f(60,24);
        glVertex2f(60,90);
        glVertex2f(30,90);

        glEnd();

        ////

        glColor3f(142.0/255.0, 68.0/255.0, 173.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(60,24);
        glVertex2f(140,24);
        glVertex2f(140,130);
        glVertex2f(60,130);

        glEnd();

        ////b3 border

        glColor3f(0.0/255.0, 0.0/255.0, 0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(60,24);
        glVertex2f(140,24);
        glVertex2f(140,130);
        glVertex2f(60,130);

        glEnd();

        ////

        glColor3f(148.0/255.0, 49.0/255.0, 38.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(140,24);
        glVertex2f(200,24);
        glVertex2f(200,100);
        glVertex2f(140,100);

        glEnd();

        ////b4 border

        glColor3f(0/255.0, 0/255.0, 0/255.0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(140,24);
        glVertex2f(200,24);
        glVertex2f(200,100);
        glVertex2f(140,100);

        glEnd();

        //////////////////////////////////////////////////////////////////////////////

        int p=0;
        while(p<10){


        for(int j = 0 ; j < 4 ; j ++)
        {
            R = A[j][0][0];
            G = A[j][0][1];
            B = A[j][0][2] ;
            for(double i = AA[j][1] ; i >= AA[j][3] ; i-=.01)
            {
                R+= ( A[j][0][0] > A[j][1][0]  ) ? (abs(A[j][0][0] - A[j][1][0]) /  ((abs( AA[j][3]-AA[j][1] )) / .01))*-1.0 :  (abs(A[j][0][0] - A[j][1][0]) /  ((abs( AA[j][3]-AA[j][1] )) / .01));
                G+= ( A[j][0][1] > A[j][1][1]  ) ? (abs(A[j][0][1] - A[j][1][1]) /  ((abs( AA[j][3]-AA[j][1] )) / .01))*-1.0 :  (abs(A[j][0][1] - A[j][1][1]) /  ((abs( AA[j][3]-AA[j][1] )) / .01));
                B+= ( A[j][0][2] > A[j][1][2]  ) ? (abs(A[j][0][2] - A[j][1][2]) /  ((abs( AA[j][3]-AA[j][1] )) / .01))*-1.0 :  (abs(A[j][0][2] - A[j][1][2]) /  ((abs( AA[j][3]-AA[j][1] )) / .01));
                glColor3f( R /255.0, G /255.0, B /255.0);
                glBegin(GL_LINES);
                glVertex2d(AA[j][0],i);
                glVertex2d(AA[j][2],i);
                glEnd();
            }
        }
        p++;

        }

        //////////////////////////////windows///////////////////////////////////////


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(10,30);
        glVertex2f(20,30);
        glVertex2f(20,36);
        glVertex2f(10,36);

        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(10,40);
        glVertex2f(20,40);
        glVertex2f(20,46);
        glVertex2f(10,46);

        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(10,50);
        glVertex2f(20,50);
        glVertex2f(20,56);
        glVertex2f(10,56);

        glEnd();


        ////////////
        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(37,32);
        glVertex2f(50,32);
        glVertex2f(50,55);
        glVertex2f(37,55);

        glEnd();

        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(37,64);
        glVertex2f(50,64);
        glVertex2f(50,84);
        glVertex2f(37,84);

        glEnd();

        //////////////////



        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(70,40);
        glVertex2f(90,40);
        glVertex2f(90,60);
        glVertex2f(70,60);

        glEnd();

        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(70,70);
        glVertex2f(90,70);
        glVertex2f(90,90);
        glVertex2f(70,90);

        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(70,100);
        glVertex2f(90,100);
        glVertex2f(90,120);
        glVertex2f(70,120);

        glEnd();

        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(110,40);
        glVertex2f(130,40);
        glVertex2f(130,60);
        glVertex2f(110,60);

        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(110,70);
        glVertex2f(130,70);
        glVertex2f(130,90);
        glVertex2f(110,90);

        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(110,100);
        glVertex2f(130,100);
        glVertex2f(130,120);
        glVertex2f(110,120);

        glEnd();

        ///////////////////////////

        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(150,40);
        glVertex2f(190,40);
        glVertex2f(190,50);
        glVertex2f(150,50);
        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(150,60);
        glVertex2f(190,60);
        glVertex2f(190,70);
        glVertex2f(150,70);
        glEnd();


        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        glVertex2f(150,80);
        glVertex2f(190,80);
        glVertex2f(190,90);
        glVertex2f(150,90);
        glEnd();


        /////////////////////////////////////////////////////border//////////

        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(10,30);
        glVertex2f(20,30);
        glVertex2f(20,36);
        glVertex2f(10,36);

        glEnd();




        //////

        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(10,40);
        glVertex2f(20,40);
        glVertex2f(20,46);
        glVertex2f(10,46);

        glEnd();


        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(10,50);
        glVertex2f(20,50);
        glVertex2f(20,56);
        glVertex2f(10,56);

        glEnd();


        ////////////
        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(37,32);
        glVertex2f(50,32);
        glVertex2f(50,55);
        glVertex2f(37,55);

        glEnd();

        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(37,64);
        glVertex2f(50,64);
        glVertex2f(50,84);
        glVertex2f(37,84);

        glEnd();

        //////////////////



        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(70,40);
        glVertex2f(90,40);
        glVertex2f(90,60);
        glVertex2f(70,60);

        glEnd();

        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(70,70);
        glVertex2f(90,70);
        glVertex2f(90,90);
        glVertex2f(70,90);

        glEnd();


        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(70,100);
        glVertex2f(90,100);
        glVertex2f(90,120);
        glVertex2f(70,120);

        glEnd();

        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(110,40);
        glVertex2f(130,40);
        glVertex2f(130,60);
        glVertex2f(110,60);

        glEnd();


        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(110,70);
        glVertex2f(130,70);
        glVertex2f(130,90);
        glVertex2f(110,90);

        glEnd();


        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(110,100);
        glVertex2f(130,100);
        glVertex2f(130,120);
        glVertex2f(110,120);

        glEnd();

        ///////////////////////////

        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(150,40);
        glVertex2f(190,40);
        glVertex2f(190,50);
        glVertex2f(150,50);
        glEnd();


        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(150,60);
        glVertex2f(190,60);
        glVertex2f(190,70);
        glVertex2f(150,70);
        glEnd();


        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(150,80);
        glVertex2f(190,80);
        glVertex2f(190,90);
        glVertex2f(150,90);
        glEnd();



        /////////////////////////////////////////////////////////////////////////









        ////////// Moon////////////////////////////////////////////////////////////////////////////

        double xr=40.0, yr=160.0;

        glColor3f(255.0/255.0, 255.0/255.0, 255.0/255.0);
        glBegin(GL_POLYGON);
        for(int i =0 ; i < 360 ; i ++)
            glVertex2d( xr +( cos(i*(PI/180.0))*18 ), yr +( sin(i*(PI/180.0))*18 ) );
        glEnd();




        R = 198,
        G = 213,
        B = 240 ;
        for(double i = 18 ; i <=21 ; i+=.01)
        {
            R-=((198-17)/(3/.01));
            G-=((213-51)/(3/.01));
            B-=((240-107)/(3/.01));

            glColor3f( R /255.0, G /255.0, B /255.0);

            glBegin(GL_LINE_LOOP);
            for(int j =0 ; j < 360 ; j ++)
                glVertex2d( 40 +( cos(j*(PI/180.0))*i ), 160 +( sin(j*(PI/180.0))*i ) );
            glEnd();
        }

////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////building color/////////////////////




        glFlush();

    }








int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						// Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

    glutInitWindowPosition(400, 50);				// Set window position
    glutInitWindowSize(650, 650);					// Set window size
    glutCreateWindow("171-15-8960");	// Create display window

    init();							// Execute initialisation procedure
    glutDisplayFunc(Mohammad_Farhan_Sadik);	// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
