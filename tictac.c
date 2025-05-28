
``` html
<!DOCTYPE html>
<html lang="en-US">
    <head>
        <meta charset='UTF-8'/> <!-- Use UTF-8 to include all characters -->
        <title>Tic Tac Toe Game in HTML5/JavaScript (Web Version) </title>>
                <script src = "main.js">< / script >
                                                                                        }< ​> ‍
<!DOCTYPE html> <html_content {   } ` ````'` '''',,,,] ]}} }} . ,[[[["
```
In the JavaScript code (main.js), we create a variable to hold all cells:

JavaScript Code(index.js):
```javascript
let board = document.querySelectorAll('.cell'); // get references of each cell on our page using querySelector All
method which returns an array including NodeList and also gives us access for looping over this list (forEach) to
select individual cells like a,b etc..
board[1].addEventListener('click', function() {  marker(this); }); board.onload = () => gameLoop(); } ); // add
event listener on all cell when document loads then start the gamesession by calling `game loop`; }} */ 'use
strict'; var cells, playerX_Mark ,playerO_mark ; (function _init() { function marker(cell)
{ if (!isGameOver()) return false } else markedBy = isBoardFull(); document.getElementById('status').innerText = ‌
‌'Your move! Now turn: X'; cell[4].classList .add ('turn'); playerX_Mark; board [3]._markedby=playerO mark (cell);
if(wins()) { endGame("Player O wins"); } else
if (_isBoardFull () && !hasWinner()){endGame('Draw')} gameLoop();} function _reset(){ /* reset all cells and start
a new turn */ cell[4]._markedby = null; document.getElementById ('status'). innerText =  'Your move! Now Turn: X';
setTimeout(function () { board [3]. mark (cell); }, 10 ); }
```   }); }) .addEventListener('click', function() { reset_board();}); // when user clicks on cell then it will
call `reset` which calls _start and new turn begins; }} 'use strict'; var winningCombos = [[. ,‌,.,],[2,. 5,, ],
[3..4]]
function endGame(msg) { /* if any player wins or draw is finished */ document .getElementById ('status').
innerText = `${ msg } ! Game Over! `; gameBoard ().classList add('winner'); }; function reset_board(){ ‌/* when
user wants to restart then call _reset*/ board. classlist remove
