var fs = require('fs')

var path = process.argv[2]
var ext = process.argv[3]

fs.readdir(path, function(err, list){
    if(err){
        return console.log(err)
    }
    for(var i = 0; i < list.length; i++){
        var temp = list[i].split('.')
        if (temp[1] == ext){
            console.log(list[i])
        }
    }
})