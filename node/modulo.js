module.exports = function (stack){
    var fs = require('fs')
    var path = stack[2]
    var ext = stack[3]
    var ret = []
    fs.readdir(path, function(err, list){
        if(err){
            return err
        }
        for(var i = 0; i < list.length; i++){
            var temp = list[i].split('.')
            if (temp[1] == ext){
                //ret.push(list[i].toString)
                //console.log(list[i])
                console.log(list[i])
            }
        }
    })
    //return ret
}