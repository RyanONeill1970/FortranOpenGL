//#include <GL\GL.h>
//#include <freeglut.h>
#include <windows.h>

__attribute__((stdcall)) void glBlendFunc(unsigned int sfactor,unsigned int dfactor);
__attribute__((stdcall)) void glCallList(unsigned int list);
__attribute__((stdcall)) void glClear(unsigned int mask);
__attribute__((stdcall)) void glDisable(unsigned int cap);
__attribute__((stdcall)) void glEnable(unsigned int cap);
__attribute__((stdcall)) void glEndList(void);
__attribute__((stdcall)) void glLightfv(unsigned int light,unsigned int pname,const float *params);
__attribute__((stdcall)) void glLineWidth(float width);
__attribute__((stdcall)) void glLoadIdentity(void);
__attribute__((stdcall)) void glMaterialfv(unsigned int face,unsigned int pname,const float *params);
__attribute__((stdcall)) void glMatrixMode(unsigned int mode);
__attribute__((stdcall)) void glNewList(unsigned int list,unsigned int mode);
__attribute__((stdcall)) void glPopAttrib(void);
__attribute__((stdcall)) void glPopMatrix(void);
__attribute__((stdcall)) void glPushAttrib(unsigned int mask);
__attribute__((stdcall)) void glPushMatrix(void);
__attribute__((stdcall)) void glRotatef(float angle,float x,float y,float z);
__attribute__((stdcall)) void glScalef(float x,float y,float z);
__attribute__((stdcall)) void glTranslatef(float x,float y,float z);
__attribute__((stdcall)) void gluLookAt(double eyex,double eyey,double eyez,double centerx,double centery,double centerz,double upx,double upy,double upz);

__attribute__((stdcall)) void gluOrtho2D(double left,double right,double bottom,double top);
__attribute__((stdcall)) void gluPerspective(double fovy,double aspect,double zNear,double zFar);
__attribute__((stdcall)) void glutButtonBoxFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutCloseFunc( void (* callback)( void ) );
__attribute__((stdcall)) int  glutCreateWindow( const char* title );
__attribute__((stdcall)) int  __glutCreateWindowWithExit(const char *title, void (__cdecl *exitfunc)(int));
__attribute__((stdcall)) void glutDialsFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutDisplayFunc( void (* callback)( void ) );

__attribute__((stdcall)) void glutEntryFunc( void (* callback)( int ) );
__attribute__((stdcall)) void glutIdleFunc( void (* callback)( void ) );
__attribute__((stdcall)) void __glutInitWithExit(int *argcp, char **argv, void (__cdecl *exitfunc)(int));
//__attribute__((stdcall,unused)) static void glutInit_ATEXIT_HACK(int *argcp, char **argv) { __glutInitWithExit(argcp, argv, exit); }
//#define glutInit glutInit_ATEXIT_HACK
//__attribute__((stdcall)) void static glutInit(int *argcp, char **argv) { __glutInitWithExit(argcp, argv, exit); }
void glutInit(int *argcp, char **argv) { __glutInitWithExit(argcp, argv, exit); }

__attribute__((stdcall)) void glutInitDisplayMode( unsigned int displayMode );
__attribute__((stdcall)) void glutJoystickFunc( void (* callback)( unsigned int, int, int, int ), int pollInterval );
__attribute__((stdcall)) void glutKeyboardFunc( void (* callback)( unsigned char, int, int ) );
__attribute__((stdcall)) void glutKeyboardUpFunc( void (* callback)( unsigned char, int, int ) );
__attribute__((stdcall)) void glutMainLoop( void );
__attribute__((stdcall)) void glutMenuDestroyFunc( void (* callback)( void ) );
__attribute__((stdcall)) void glutMenuStateFunc( void (* callback)( int ) );
__attribute__((stdcall)) void glutMenuStatusFunc( void (* callback)( int, int, int ) );
__attribute__((stdcall)) void glutMotionFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutMouseFunc( void (* callback)( int, int, int, int ) );
__attribute__((stdcall)) void glutMouseWheelFunc( void (* callback)( int, int, int, int ) );
__attribute__((stdcall)) void glutOverlayDisplayFunc( void (* callback)( void ) );
__attribute__((stdcall)) void glutPassiveMotionFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutPostRedisplay( void );
__attribute__((stdcall)) void glutReshapeFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutSolidIcosahedron( void );
__attribute__((stdcall)) void glutSpaceballButtonFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutSpaceballMotionFunc( void (* callback)( int, int, int ) );
__attribute__((stdcall)) void glutSpaceballRotateFunc( void (* callback)( int, int, int ) );
__attribute__((stdcall)) void glutSpecialFunc( void (* callback)( int, int, int ) );
__attribute__((stdcall)) void glutSpecialUpFunc( void (* callback)( int, int, int ) );
__attribute__((stdcall)) void glutStrokeCharacter( void* font, int character );
__attribute__((stdcall)) void glutSwapBuffers( void );
__attribute__((stdcall)) void glutTabletButtonFunc( void (* callback)( int, int, int, int ) );
__attribute__((stdcall)) void glutTabletMotionFunc( void (* callback)( int, int ) );
__attribute__((stdcall)) void glutTimerFunc( unsigned int time, void (* callback)( int ), int value );
__attribute__((stdcall)) void glutVisibilityFunc( void (* callback)( int ) );
__attribute__((stdcall)) void glutWindowStatusFunc( void (* callback)( int ) );
__attribute__((stdcall)) void glutWMCloseFunc( void (* callback)( void ) );

void glClear(unsigned int mask)
{
    glClear(mask);
}


void JunkRoutine() // Do not call, here to ensure the routines are linked. Will crash.
{
     glClear(0);
     glutPostRedisplay();
     glutSwapBuffers();

     glBlendFunc(0,0);
     glCallList(0);
     glClear(0);
     glDisable(0);
     glEnable(0);
     glEndList();
     glLightfv(0,0,NULL);
     glLineWidth(0);
     glLoadIdentity();
     glMaterialfv(0,0,NULL);
     glMatrixMode(0);
     glNewList(0,0);
     glPopAttrib();
     glPopMatrix();
     glPushAttrib(0);
     glPushMatrix();
     glRotatef(0,0,0,0);
     glScalef(0,0,0);
     glTranslatef(0,0,0);
     gluLookAt(0,0,0,0,0,0,0,0,0);

     gluOrtho2D(0,0,0,0);
     gluPerspective(0,0,0,0);
     glutButtonBoxFunc( NULL );
     glutCloseFunc( NULL );
     glutCreateWindow( NULL );
     __glutCreateWindowWithExit(NULL, NULL);
     glutDialsFunc( NULL );
     glutDisplayFunc( NULL );
     
     glutEntryFunc( NULL );
     glutIdleFunc( NULL );
     glutInit(NULL,NULL);
     glutInitDisplayMode( 0 );
     glutJoystickFunc( NULL, 0 );
     glutKeyboardFunc( NULL );
     glutKeyboardUpFunc( NULL );
     glutMainLoop();
     glutMenuDestroyFunc( NULL );
     glutMenuStateFunc( NULL );
     glutMenuStatusFunc( NULL );
     glutMotionFunc( NULL );
     glutMouseFunc(NULL );
     glutMouseWheelFunc( NULL );
     glutOverlayDisplayFunc( NULL );
     glutPassiveMotionFunc( NULL );
     glutPostRedisplay();
     glutReshapeFunc( NULL );
     glutSolidIcosahedron();
     glutSpaceballButtonFunc( NULL );
     glutSpaceballMotionFunc( NULL );
     glutSpaceballRotateFunc( NULL );
     glutSpecialFunc( NULL );
     glutSpecialUpFunc( NULL );
     glutStrokeCharacter( NULL, 0 );
     glutSwapBuffers();
     glutTabletButtonFunc( NULL );
     glutTabletMotionFunc( NULL );
     glutTimerFunc( 0, NULL, 0 );
     glutVisibilityFunc( NULL );
     glutWindowStatusFunc( NULL );
     glutWMCloseFunc( NULL );
}
