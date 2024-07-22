var sortPeople = function (names, heights) {
    for (let i = 0; i < heights.length - 1; i++) {
        for (let j = 0; j < heights.length - 1 - i; j++) {
            if (heights[j] < heights[j + 1]) {
                [heights[j], heights[j + 1]] = [heights[j + 1], heights[j]];
                [names[j], names[j + 1]] = [names[j + 1], names[j]];
            }
        }
    }
    return names
};


console.log(sortPeople(["Alice", "Bob", "Bob"], [155, 185, 150]))