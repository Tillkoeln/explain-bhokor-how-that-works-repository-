bla bla bla bla bla 
if someone else read that text and know it better or 
if something isnt correct, feel free to post the correct explain / example
bla bla bla bla
bla bla bla
bla bla
bla 

Hello Bhokor ^^ 
you asked ... 


static int64_t GetStakeCombineThreshold() { return 100 * COIN; }     
// Combine different inputs from your wallet to maximize your possible stake weight 
// or with other words...  you try to bundle your power, to increase your chance to find a block. 

// in that case, you combine as much as possible different inputs until the value hit 100 Coins total
// 
// as an example...  you have different inputs inside your client, each of them is able to stake ...  
// the coins inside these inputs are ... 
// the specific weight from that coins inside the input ....

//coins =  +10 +10 +10 +10 +10 +10 +10 +10 +10 +10    =  100 Coins total  from 10 Different Inputs. 
//weight=  + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2    =   20 StakeWeight total  from 10 Different Inputs. 

//these 10 Inputs,  which contains 10 Coins and a weight from 2 each, Combine her chance to find a block
//into a single Input with a 10 times better chance to solve a block. 

//coins =  +100
//weight=  + 20 

---------------------------------------------------------------------------------
there are as much as possible inputs combined until you hit the cap from 100 Coins. 

BUT.... 

there are MAXIMUM 100 inputs combined until you hit the cap from 100 Coins.  
//this is declared a few lines below...
      //stop combining different inputs 	  
      if (txNew.vin.size() >= 100)
      //if the total inputs are more then 100 

so you could have .... "theoretical" ...  combined .... inputs until you hit the cap. 

 Coins inside the input  =  +10 +10 +10 +10 +10 +10 +10 +10 +10 +10 = //  10 Inputs with 100 Coins
 Coins inside the input  =  +20 +20 +20 +20 +20  =  // 5 Inputs with 100 Coins
 Coins inside the input  =  + 1 + 1 + 1 + 1 + 1 + 1 + 1  + 1 ... .. .  =  // 100 Inputs with 100 Coins
 Coins inside the input  =  +0.5 +0.5 +0.5 +0.5 +0.5 +0.5 +0.5 +0.5 ... .. .  = // 100 Inputs with 50 Coins
 Coins inside the input  =  +0.25 +0.25 +0.25 +0.25 +0.25 +0.25 +0.25 +0.25 ... .. .  = //  100 Inputs with 25 Coins 
 Coins inside the input  =  +99 + 1  = //  2 Inputs with 100 Coins 
 Coins inside the input  =  +101 = //  1 Input with 101 Coins 
 
 behind these values "max 100 inputs"  and / or  100 Coins, there are no more inputs combined.....
 
 
 
 ---------------------------------------------------------------------------------
 ---------------------------------------------------------------------------------
 ---------------------------------------------------------------------------------
 
 bla bla bla bla 
 bla bla bla 
 bla bla 
 bla 
....
...
..
.
some other settings.... 
... 
.. 
.
     
            // Stop adding more inputs if already too many inputs 
            if (txNew.vin.size() >= 100)    //------ you remind? max 100 

            // Stop adding inputs if reached reserve limit
            if (nCredit + pcoin.first->vout[pcoin.second].nValue > nBalance - nReserveBalance) //---- i think self explaining //reservedbalance

            // Do not add additional significant input
            if (pcoin.first->vout[pcoin.second].nValue >= GetStakeCombineThreshold()) //  ---- you remind? max 100 Coins

            // Do not add input that is still too young
            if (IsProtocolV3(txNew.nTime))  //  ----- only coins which are old enough and full confirmed
			


 ---------------------------------------------------------------------------------
 ---------------------------------------------------------------------------------
 ---------------------------------------------------------------------------------
 
 bla bla bla bla 
 bla bla bla 
 bla bla 
 bla 
....
...
..
.
some other setting.... 
... 
.. 
.
     

// please press your internal reset button, the following part is some other story 
// and has nothing to do with combining anything or something or someone

static int64_t GetStakeSplitThreshold() { return 2 * GetStakeCombineThreshold(); }
// this means...... 

if
//you find a block 
and
//the total amount of coins which are involved and resulting from these new block
                   //----- this include the coins inside the input which solve the block
                   // ------ and this include the reward which you receive for the block 
Hit a specific limit. 
then 
the Reward/output is split into 2 Inputs 

....
..
:
you stake with 100 Coins and the reward is 100 ...  you earn 200 Coins split into 2 Inputs. 
----
you stake with 0.5 coins and the reward is 1.4 ... you earn 1.9 Coin paid into 1 Input







 ---------------------------------------------------------------------------------
 ---------------------------------------------------------------------------------
 ---------------------------------------------------------------------------------
 
 bla bla bla bla 
 bla bla bla 
 bla bla 
 bla 
....
...
..
.
some other setting.... 
... 
.. 
.

//different sourcecodes .. different rules... different ways to specify what you want....
as example ... 

unsigned int nStakeSplitAge = 24 * 60 * 60;   

this means .. 
IF you find a Block .. 
AND the input which is used to solve the block
is NOT older then 1 Day     60 Seconds * 60 Minutes * 24 Hours   = 1 Day
then ...   the Output get split into 2 Inputs 

// in that case, the rule is specified by the age 
// and not by any coin value


 bla bla bla bla 
 bla bla bla 
 bla bla 
 bla 
....
...

int64_t nStakeCombineThreshold = 10000 * COIN;

// in that case similar like on the top of that file ... 
up to ten thousand coins,  bundled to increase the oportunity to solve a block.

expect... there is some other rule jumping in and pissing at the leg from the rule with the 10k coins .. 
bla bla



sorry. it is hard to explain that shit with less words and without loosing the focus ... ^^







