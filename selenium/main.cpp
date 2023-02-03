#include <webdriverxx/webdriverxx.h>
using namespace webdriverxx;

int main() {
   WebDriver firefox = Start(Firefox());
   firefox
       .Navigate("http://google.com")
       .FindElement(ByClass("class_name"))
       .SendKeys("Hello, world!")
       .Submit();
   return 0;    
}