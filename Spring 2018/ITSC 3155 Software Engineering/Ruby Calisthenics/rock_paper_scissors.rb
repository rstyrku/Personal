class RockPaperScissors

  # Exceptions this class can raise:
  class NoSuchStrategyError < StandardError ; end

  def self.winner(player1, player2)
    # YOUR CODE HERE
    case
      when ((player1[1]!="R")&&(player1[1]!="P")&&(player1[1]!="S")) || (player2[1]!="R")&&(player2[1]!="P")&&(player2[1]!="S")
        raise NoSuchStrategyError, "Strategy must be one of R,P,S"
      when (player1[1]==player2[1])
        return player1
      when (player1[1]=="R")&&(player2[1]=="S")
        return player1
      when (player2[1]=="R")&&(player1[1]=="S")
        return player2
      when (player1[1]=="S")&&(player2[1]=="P")
        return player1
      when (player2[1]=="S")&&(player1[1]=="P")
        return player2
      when (player1[1]=="P")&&(player2[1]=="R")
        return player1
        when (player2[1]=="P")&&(player1[1]=="R")
        return player2
    end
  end

  def self.tournament_winner(tournament)
    # YOUR CODE HERE
    if tournament[0][0].is_a? String
      return self.winner(tournament[0],tournament[1])
    else
      return self.winner(self.tournament_winner(tournament[0]),self.tournament_winner(tournament[1]))
    end
  end
end
