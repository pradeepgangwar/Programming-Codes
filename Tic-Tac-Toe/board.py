class Board:
    def __init__(self, rows, columns):
        self.rows = rows
        self.columns = columns
        self.board = []
        self.turn = 1
    
    def initialize_board(self):
        for i in range(0,self.rows+1):
            column = []
            for j in range(0,self.columns+1):
                column.append(-1)
            self.board.append(column)
    
    def get_rows(self):
        return self.rows
    
    def get_columns(self):
        return self.columns

    def play(self, row, column):
        if (row > self.rows) or (column > self.columns) or (self.board[row][column] != -1):
            print("Not a valid move. Choose again!")
            return
        symbol = "X"
        if self.turn%2 == 0:
            symbol = "0"
        self.board[row][column] = symbol
        self.turn += 1

    def draw_board(self):
        for i in range(1,self.rows+1):
            for j in range(1, self.columns+1):
                print(self.board[i][j], end=' ')
            print()
        
    def current_turn(self):
        if self.turn%2 == 0:
            return "0"
        else:
            return "X"
    
    def game_drawn(self):
        for i in range(1,self.rows+1):
            for j in range(1, self.columns+1):
                if self.board[i][j] == -1:
                    return False
        return True
    
    def game_won(self):
        if (self.board[1][1] != -1) and (self.board[1][1] == self.board[1][2] == self.board[1][3]):
            return True
        elif (self.board[2][1] != -1) and (self.board[2][1] == self.board[2][2] == self.board[2][3]):
            return True
        elif (self.board[3][1] != -1) and (self.board[3][1] == self.board[3][2] == self.board[3][3]):
            return True
        elif (self.board[1][1] != -1) and (self.board[1][1] == self.board[2][2] == self.board[3][3]):
            return True
        elif (self.board[3][1] != -1) and (self.board[3][1] == self.board[2][2] == self.board[1][3]):
            return True
        elif (self.board[1][1] != -1) and (self.board[1][1] == self.board[2][1] == self.board[3][1]):
            return True
        elif (self.board[1][2] != -1) and (self.board[1][2] == self.board[2][2] == self.board[3][2]):
            return True
        elif (self.board[1][3] != -1) and (self.board[1][3] == self.board[2][3] == self.board[3][3]):
            return True
        else:
            return False