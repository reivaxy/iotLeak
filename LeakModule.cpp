/**
 *  iotinator Water Leak Detection Slave module 
 *  Xavier Grosjean 2018
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 
#include "LeakModule.h"
 
LeakModule::LeakModule(LeakConfigClass* config, int displayAddr, int displaySda, int displayScl):XIOTModule(config, displayAddr, displaySda, displayScl) {
}

char* LeakModule::_customData() {
//  Serial.println("LeakModule::_customData");
  char* data = (char *)malloc(100);
  sprintf(data, "{\"autoWake\":%d}", ((LeakConfigClass*)_config)->getAutoWake());
  return data;  
}