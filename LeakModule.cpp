/**
 *  iotinator Water Leak Detection Slave module 
 *  Xavier Grosjean 2018
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 
#include <LeakModule.h>
 
LeakModule::LeakModule(LeakConfigClass* config, int displayAddr, int displaySda, int displayScl):XIOTModule(config, displayAddr, displaySda, displayScl) {
  setCanSleep(config.getCanSleep());  
}


void LeakModule::_customRegistrationData(char *data) {
  data = malloc(100);
  strcpy(data, "My custom data");  
}