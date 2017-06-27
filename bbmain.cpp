
const int YEARLY_BLOCKCOUNT = 262800;
// miner's coin stake reward based on coin age spent (coin-days)
int64_t GetProofOfStakeReward(int64_t nCoinAge, int64_t nFees)
{
    int64_t nRewardCoinYear;

    nRewardCoinYear = MAX_MINT_PROOF_OF_STAKE;

    int64_t nSubsidy = nCoinAge * nRewardCoinYear / 365 / COIN;

    if(pindexBest->nHeight <= 100)

              {
                int64_t nSubsidy = nCoinAge * nRewardCoinYear / 365 / COIN / 10 * 1337;
                    return nSubsidy + nFees;
            }

    else if(pindexBest->nHeight <= 200)

        {
                int64_t nSubsidy = nCoinAge * nRewardCoinYear / 365 / COIN / 10 * 12345;
                    return nSubsidy + nFees;
        }

    if (fDebug && GetBoolArg("-printcreation"))
        printf("GetProofOfStakeReward(): create=%s nCoinAge=%"PRId64"\n", FormatMoney(nSubsidy).c_str(), nCoinAge);

    return nSubsidy + nFees;
}

