function checkPanagarm(str) {
    let alphabet= "abcdefghijklmnopqrstuvwxyz";
    str = str.toLowerCase();
     for(letter of alphabet){
        if(!str.includes(letter)) return false
     }
     return (true)
}

console.log(checkPanagarm("The quick brown fox jumps over the lazy dog!!"))