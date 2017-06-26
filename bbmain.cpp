

// miner's coin base reward
int64_t GetProofOfWorkReward(int64_t nFees)
{
    int64_t nSubsidy = 0 * COIN;

    if(nBestHeight == 0)
               {
               nSubsidy = 8000000 * COIN; //Total premine coin
               }

    if (fDebug && GetBoolArg("-printcreation"))
        printf("GetProofOfWorkReward() : create=%s nSubsidy=%"PRId64"\n", FormatMoney(nSubsidy).c_str(), nSubsidy);

    return nSubsidy + nFees;
}

const int YEARLY_BLOCKCOUNT = 262800;
// miner's coin stake reward based on coin age spent (coin-days)
int64_t GetProofOfStakeReward(int64_t nCoinAge, int64_t nFees)
{
    int64_t nRewardCoinYear;

    nRewardCoinYear = MAX_MINT_PROOF_OF_STAKE;

    int64_t nSubsidy = nCoinAge * nRewardCoinYear / 365 / COIN;

    if(pindexBest->nHeight <= 100)

              {
                nSubsidy = 24 * nRewardCoinYear * nCoinAge  / 365 /COIN;
                    return nSubsidy + nFees;
            }

    else if(pindexBest->nHeight <= 200)

        {
           nSubsidy = 12 * nRewardCoinYear * nCoinAge  / 365 /COIN;
                    return nSubsidy + nFees;
        }

    if (fDebug && GetBoolArg("-printcreation"))
        printf("GetProofOfStakeReward(): create=%s nCoinAge=%"PRId64"\n", FormatMoney(nSubsidy).c_str(), nCoinAge);

    return nSubsidy + nFees;
}

