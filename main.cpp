//cut the file into the interesting / specific part..
//similar files are available on the other sourcecodes

int64_t GetProofOfWorkReward(int64_t nFees)
{

    int64_t nSubsidy = 0 * COIN;
       
   if (pindexBest->nHeight <= 1)        // means block 0 + 1 
      {
        int64_t nSubsidy = 1440 * COIN;     // gives 1440 coins on block 0 + 1
        return nSubsidy + nFees;         // gives 1440 coins + Tx fee 
      }
      
    else if (pindexBest->nHeight <= 2880)    //means block 2 - 2880 
      {
        int64_t nSubsidy = 1 * COIN;      // gives 1 Coin 
        return nSubsidy + nFees;        // gives 1 Coin + Tx fee
      }

  
	  
    if (fDebug && GetBoolArg("-printcreation"))
    printf("GetProofOfWorkReward() : create=%s nSubsidy=%"PRId64"\n", FormatMoney(nSubsidy).c_str(), nSubsidy);
    
    return nSubsidy + nFees;
}


on PoS ... 
//
//int64_t GetProofOfStakeReward(int64_t nCoinAge, int64_t nFees)
//{
//    int64_t nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8);
//
//    if (fDebug && GetBoolArg("-printcreation"))
//        printf("GetProofOfStakeReward(): create=%s nCoinAge=%"PRId64"\n", FormatMoney(nSubsidy).c_str(), nCoinAge);
//
//    return nSubsidy + nFees;
//}
//


int64_t GetProofOfStakeReward(int64_t nCoinAge, int64_t nFees)
{  
    int64_t nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8);  
  
    if(pindexBest->nHeight < 2880)     // means up to Block 2880
    {
        int64_t nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8);  //  reward based on  % per year. declared inside main.h
		return nSubsidy + nFees; 
    }

as an example ... 	
        int64_t nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8) / 2 ;	// would reduce the reward from above /2
        int64_t nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8) * 2 ;	// would increase the reward x 2

		
		
		
//or you can set fixed values like 1 or 2 or 3 coins per pos block . 		
		else if(pindexBest->nHeight < 5760)
    {
        nSubsidy = 2 * COIN; 
//      int64_t nSubsidy = nCoinAge * COIN_YEAR_REWARD * 33 / (365 * 33 + 8);  
		return nSubsidy + nFees; 
    }	


	
	if (fDebug && GetBoolArg("-printcreation"))  
        printf("GetProofOfStakeReward(): create=%s nCoinAge=%"PRId64"\n", FormatMoney(nSubsidy).c_str(), nCoinAge);  
  
    return nSubsidy + nFees;  
}  
