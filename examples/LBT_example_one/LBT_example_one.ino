/*
The "100+ Word" Arduino Audio Shield! Speak Arduino, Speak!
by Patrick Thomas Mitchell
http://www.engineeringshock.com/100-word-arduino-audio-shield.html

Library version 1.0 Sept 23, 2017 by LeRoy Miller

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  

Copyright (c) 2017 LeRoy Miller

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
*/

/*
 * Mar 6, 2018 - Updated to work with the Little Buddy Talker
 * http://www.engineeringshock.com/the-little-buddy-talker-project-page.html
 * LeRoy Miller, (c) 2018
 * Mar 11, 2018 Updated words start with underscore.
 * A.M. is _am_ and P.M. is _pm_
 * Based on feedback from user jjdeprisco (Thank You)
 * LeRoy Miller, (C) 2018
 * Ver 1.5.1

Mar 19, 2018 - Cleaned up code a bit. Found a few words that didn't have underscores added and corrected. Split the libraries apart because of a problem that was found with the LBT and Orignal 100+ Word code
 */
 
/* Arduino UNO Hookup
 * LBT CS to Arduino PIN 10 
 * LBT SC to Arduino PIN 13 
 * LBT DI to Arduino PIN 11
 */

#include "Word100LBT.h"; //Notice that LBT now has it's own library

//use Word100lbt for the Little Buddy talker
Word100lbt Word100(10); //cs pin 

int sentence[] = {_one, _two, _three, _four, _five, _six, _seven, _eight, _nine, _ten};
int sentence2[] = {_alert, _alert, _intruder, _in, _zone, _two};

void setup() {
  
Word100.begin();

}

#define arr_len( x ) ( sizeof ( x ) / sizeof (*x) )

void loop() {

  //say the first sentence (Count to Ten)
  Serial.print(arr_len(sentence));
  for (int i = 0; i < arr_len(sentence); i++) {
  Word100.say(sentence[i]);
}

delay(1000); //wait for one second

//say the second sentence (Alert Alert intruder in zone two)
 Serial.println(arr_len(sentence2));
 for (int i = 0; i < arr_len(sentence2); i++) {
 Word100.say(sentence2[i]);
}

delay(1000);

//say all the words. using the words as counters
for (int i = _colour; i < _zone+1; i++) {
  Word100.say(i);
}

delay(1000);

//we can just call say(xxx)

Word100.say(_red);
Word100.say(_alert);
delay(1000);

while(1);
}
