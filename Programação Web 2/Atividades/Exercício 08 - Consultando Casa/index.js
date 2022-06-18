var todasCasas = [
    {
        "slug": "stark",
        "name": "House Stark of Winterfell",
        "members": [
            {
                "name": "Jon Snow",
                "slug": "jon"
            },
            {
                "name": "Sansa Stark",
                "slug": "sansa"
            },
            {
                "name": "Eddard \"Ned\" Stark",
                "slug": "ned"
            },
            {
                "name": "Arya Stark",
                "slug": "arya"
            },
            {
                "name": "Bran Stark",
                "slug": "bran"
            }
        ]
    },
    {
        "slug": "lannister",
        "name": "House Lannister of Casterly Rock",
        "members": [
            {
                "name": "Jaime Lannister",
                "slug": "jaime"
            },
            {
                "name": "Tyrion Lannister",
                "slug": "tyrion"
            },
            {
                "name": "Cersei Lannister",
                "slug": "cersei"
            },
            {
                "name": "Tywin Lannister",
                "slug": "tywin"
            }
        ]
    },
    {
        "slug": "baratheon",
        "name": "House Baratheon of Dragonstone",
        "members": [
            {
                "name": "Joffrey Baratheon",
                "slug": "joffrey"
            },
            {
                "name": "Robert Baratheon",
                "slug": "robert"
            }
        ]
    },
    {
        "slug": "targaryen",
        "name": "House Targaryen of King's Landing",
        "members": [
            {
                "name": "Aerys II Targaryen",
                "slug": "aerys"
            },
            {
                "name": "Daenerys Targaryen",
                "slug": "daenerys"
            }
        ]
    },
    {
        "slug": "greyjoy",
        "name": "House Greyjoy of Pyke",
        "members": [
            {
                "name": "Theon Greyjoy",
                "slug": "theon"
            }
        ]
    },
    {
        "slug": "tarly",
        "name": "House Tarly of Horn Hill",
        "members": [
            {
                "name": "Samwell Tarly",
                "slug": "samwell"
            }
        ]
    },
    {
        "slug": "tarth",
        "name": "House Tarth of Evenfall Hall",
        "members": [
            {
                "name": "Brienne of Tharth",
                "slug": "brienne"
            }
        ]
    },
    {
        "slug": "bolton",
        "name": "House Bolton of the Dreadfort",
        "members": [
            {
                "name": "Ramsay Bolton",
                "slug": "ramsay"
            }
        ]
    },
    {
        "slug": "baelish",
        "name": "House Baelish of Harrenhal",
        "members": [
            {
                "name": "Petyr Baelish",
                "slug": "baelish"
            }
        ]
    },
    {
        "slug": "tyrell",
        "name": "House Tyrell of Highgarden",
        "members": [
            {
                "name": "Olenna Tyrell",
                "slug": "olenna"
            }
        ]
    }
]

const express = require('express')
const app = express()
const PORTA = 8080

app.listen(PORTA, function(){
    console.log(`Servidor iniciado na porta ${PORTA}`)
})

app.use('/', function(req, res){
    var query = req.query.nome

    for (const casa of todasCasas){
        for (const membro of casa.members){
            if (query == membro.name){
                res.send("Este membro" + query + " pertence a casa " + (casa.name))
            }
        }
    }
    
})