/**
 *  iotinator Water Leak Detection Slave module 
 *  Xavier Grosjean 2018
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 

#include <stdio.h>
#include "LeakModule.h"

#include "config.h"

#define API_VERSION "1.0"    // modules can check API version to make sure they are compatible...

// Global object to store config
LeakConfigClass *config;
LeakModule* module;

void setup(){
  Serial.begin(9600);
  delay(500); // time to connect serial
  
  config = new LeakConfigClass((unsigned int)CONFIG_VERSION, (char*)MODULE_NAME);
  config->init();
  
  module = new LeakModule(config, 0x3C, D5, D6);
     
}

/*********************************
 * Main Loop
 *********************************/
void loop() {
  // Mandatory periodic call, to refresh display, Clock, check requests
  // on the http API, ...
  module->loop();
  delay(20);  
}

