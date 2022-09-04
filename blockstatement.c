{
// These commands form a block statement because they are enclosed by braces
    deal_first_card();
    deal_second_card();
    cards_in_hand();
}

// Control Statements such as if checks a condition before running the code 
if (value_of_hand <=16)  <- This is the condition
    hit();               <- Run this statement if the condition is true
else
    stand();             <- Run this statement if the condition is false


// if statements typically need to do more than one thing when a condition
// is true, so they are often used with block statements 
if (dealer_card == 6){
    double_down();
    hit();
// both of the commands will run if the condition is true
// the commands are grouped inside a single block statement
}



