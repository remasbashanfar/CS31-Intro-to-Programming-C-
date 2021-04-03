//
//  Board.cpp
//  BeatThat
//

#include "Board.h"


namespace cs31
{
    // setup a new Board
    Board::Board() : mGameOver(false), mHumanWon(false), mComputerWon(false), mHumanRoundsWon(0), mComputerRoundsWon(0), mHumanDie1(), mHumanDie2(), mComputerDie1(), mComputerDie2(), mTurnsLeft(0)
    {

    }

    // TODO: called to identify the game ended tied
    // adjust mHumanWon, mComputerWon and mGameOver appropriately
    //DONE
    void Board::markTied()
    {
        mGameOver= true;
        mHumanWon=false;
        mComputerWon=false;
        
    }
    
    // TODO: called to identify the Human won the game
    // adjust mHumanWon, mComputerWon and mGameOver appropriately
    //DONE
    void Board::markHumanAsWinner()
    {
        mHumanWon=true;
        mComputerWon= false;
        mGameOver=true;
    }
    
    // TODO: called to identify the Computer won the game
    // adjust mHumanWon, mComputerWon and mGameOver appropriately
    //DONE
    void Board::markComputerAsWinner()
    {
        mHumanWon=false;
        mComputerWon=true;
        mGameOver=true;
    }
    
    // TODO: is the game over?
    //DONE- NOT SURE
    bool Board::isGameOver( ) const
    {
        return (mGameOver );

        //bool mGameOver=false;
//        if ( mTurnsLeft > 0){
//            return false;
//        }
//        else return(true);
    }

    // TODO: is the game over and has the Human Player already won?
    //DONE
    bool Board::didHumanWin() const
    {
        
         if (Board::isGameOver() == true && mHumanWon== true){
            return true;
         }
         else return( false );
         
    }
    
    // TODO: is the game over and has the Computer Player already won
    //DONE
    bool Board::didComputerWin() const
    {
        
        if (Board::isGameOver() == true && mComputerWon== true){
             return true;
         }
         else return( false );
         
    }

    // trivial setters

    void Board::setTurnsLeft( int turns )
    {
        mTurnsLeft = turns;
    }

    void Board::setHumanRoundsWon( int rounds )
    {
        mHumanRoundsWon = rounds;
    }

    void Board::setComputerRoundsWon( int rounds )
    {
        mComputerRoundsWon = rounds;
    }

    void Board::setHumanDiceRolled( Die d1, Die d2 )
    {
        mHumanDie1 = d1;
        mHumanDie2 = d2;
    }

    void Board::setComputerDiceRolled( Die d1, Die d2 )
    {
        mComputerDie1 = d1;
        mComputerDie2 = d2;
    }

    // trivial getters

    int Board::getHumanRoundsWon( )
    {
        return( mHumanRoundsWon );
    }

    int Board::getComputerRoundsWon( )
    {
        return( mComputerRoundsWon );
    }

    int Board::getTurnsLeft( )
    {
        return( mTurnsLeft );
    }

    // major method called with each round of play by the BeatThat class
    std::string Board::display( std::string message ) const
    {
        std::string s = "\n\n\t--BeatThat Game--\n";
        
        s += "\n";
        s += "\t\t";
        s += "human rolled:";
        s += std::to_string( mHumanDie1.getValue() );
        s += std::to_string( mHumanDie2.getValue() );
        s += "\n";
        s += "\t\t";
        s += "computer rolled:";
        s += std::to_string( mComputerDie1.getValue() );
        s += std::to_string( mComputerDie2.getValue() );
        s += "\n";
        s += "\n";
        s += message;
        s += "\n\n";
        s += "Human \t\trounds won:";
        s += std::to_string( mHumanRoundsWon );
        s += "\t\tTurns Left ";
        s += std::to_string( mTurnsLeft );
        s += "\n";
        s += "Computer \trounds won:";
        s += std::to_string( mComputerRoundsWon );
        s += "\n\n\n";
        return( s );
    }

    std::string Board::endingMessage() const
    {
        std::string s( "" );
        if (isGameOver() && didHumanWin())
        {
            s = "\n\t\tyou won BeatThat!\n";
        }
        else if (isGameOver() && didComputerWin())
        {
            s = "\n\t\tyou lost BeatThat!\n";
        }
        else if (isGameOver() && (!didComputerWin() && !didHumanWin()))
        {
            s = "\n\t\tBeatThat ended in a tied game!\n";
        }
        return( s );
    }
    


    
}
