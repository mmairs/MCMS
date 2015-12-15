#include <iostream>
#include <string>
using namespace std;
int main (int argc, char *argv[]){
  cout << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" \"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">" << endl
  << "<html><head>" << endl
  << "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">"
   << endl << "<title>";
  for (int i=2;i<argc;i++) 
    cout << argv[i] << " "; 
  cout << " </title>" <<endl
  << "<link rel=\"stylesheet\" type=\"text/css\" href=\"" << argv[1] << "\"/>"
  << endl << "<link rel=\"shortcut icon\" href=\"/icon.ico\"/>"
  << endl << "</head>" << endl 
  << "<body>"
  << endl ;
}
