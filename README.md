# SpeechInjector by Richard Simpson 
contact : revsimpson@casema.nl

The easiest way to apply voice-commands in your IOS app.

# How to use?

Here is some example code how to use it :

import UIKit

class ViewController: UIViewController {

    var injector : SpeechInjector!  // Allways initiate here not in viedDidLoad or anywhere else!!!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Setting up connectors...which are a set of words (add as much as you like) which when are being said
        // will perform the action you specify in the closure. PS Also keep in mind people do not say the words
        // as they should so you should take grammer errors into account. During debugging you will see what word
        // is captured when you say something.
        
        let connector1 = SpeechConnector(words: "hello","hi","good morning","hellu") {
            // do some kind of action
            print("connector1 action done") 
        }
        
        let connector2 = SpeechConnector(words: "next","forward") {
            // do some kind of action for instance transtion to another screen
            // or do something in the UI. Always refer to self within the closure
            // but code complition will let you know ;-)
            
            print("connector2 action done") 
        }
        
        let connector3 .... etc etc etc
 
       // When you made all your voice-commands add them to the SpeechInjector
       // You always send 'self' along with the init of the injector
       
       injector = SpeechInjector(connectors: [connector1,connector2, etc etc], vc: self)
       
       // Now place the button in you viewcontroller
       injector.placeSpeechButton()
    }
}


# Different init options for the SpeechInjector

You can set different options when you initiate a SpeechInjector 

<B>Basic</B> :

SpeechInjector(connectors: [SpeechConnector], vc: UIViewController)

 
<B>With options</B> :

( all are optional so if you do not want to use for example 'buttonColor' then delete 'buttonColor' from the init.

<i><font color="green">Valid</font></i>

SpeechInjector(connectors: <B>[SpeechConnector]</B>, vc: <B>UIViewController</B>, language: <B>String</B>, position: <B>SpeechInjector.SpeechButtonLocation</B>, buttonColor: <B>UIColor</B>, buttonRecordingColor: <B>UIColor</B>)

<i><font color="green">Valid</font></i>

SpeechInjector(connectors: <B>[SpeechConnector]</B>, vc: <B>UIViewController</B>, language: <B>String</B>, position: <B>SpeechInjector.SpeechButtonLocation</B>)

<i><font color="green">Valid</font></i>

SpeechInjector(connectors: <B>[SpeechConnector]</B>, vc: <B>UIViewController</B>, language: <B>String</B>)


<i><font color="red">Invalid</font></i>

If you do not want to use a property and set it to 'nil'. So you either use it or delete it from the init.

So this is wrong : 

SpeechInjector(connectors: [connector1, connector2], vc: self, language: <font color="red">nil</font>) <B><- WRONG !!</B>


or


SpeechInjector(connectors: [connector1, connector2], vc: self, language: <font color="red">""</font>) <B><- WRONG !!</B>


If you do not use a property then just leave the whole thing out!


# Default settings


When you do not use a property default settings will be used:

language = "nl-NL"  (use your own country code to capture words in your own language!)

position = ".rightBottom" 

buttonColor = UIColor(red:0.30, green:0.50, blue:0.70, alpha:1.0) (blue)

buttonRecordingColor = UIColor(red:0.94, green:0.17, blue:0.18, alpha:1.0) (red)

# Extra offset after setting the position


When you have set the position in your init... you can still change the offset of that position.

Remember where we have set the button : 

<B>injector.placeSpeechButton()</B>

You can add offsets to that function like this :

<B>injector.placeSpeechButton(xOffset: 20, yOffset : 35)</B>

Default the offset is <B>xOffset = 16 and yOffset =16)
  
# Thats about it for now.... ! 


If you want to donate my addresses are as follows :

<B>TRON (TRX) : TAo7ydaxqXu6bebuCUH2qEdhP6xP65E35K</B>

<B>BITCOIN (BTC) : 1AmjnkZsXuBmowGjw6gEyisdkYBPYhaD8z</B>
