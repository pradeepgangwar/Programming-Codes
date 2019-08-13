from board import Board
from player import Player

if __name__=='__main__':
    board = Board(3,3)
    board.initialize_board()
    player1 = Player("X")
    print("Player 1 initialized having symbol {}".format(player1.get_symbol()))
    player2 = Player("0")
    print("Player 2 initialized having symbol {}".format(player2.get_symbol()))
    while ((not board.game_won()) and (not board.game_drawn())):
        if board.current_turn() == "X":
            print("Player 1 which square do you choose?")
        else:
            print("Player 2 which square do you choose?")
        row = int(input())
        column = int(input())
        board.play(row, column)
        board.draw_board()
    
    if board.game_won():
        if board.current_turn() == "X":
            print("Player 2 won")
        else:
            print("Player 1 won")
    else:
        print("Game Drawn!")
    