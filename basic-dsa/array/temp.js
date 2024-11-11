let x  = [1,21,2,12,4]


fetch("https://dummyjson.com/todos").then(res => res.json()).then(data => console.log(data))