[...Array(150).keys()].forEach(i => ++i && console.log(('00' + (i < 100 && (0 === i % 3 || 3 === i % 10) ? i + "!" : i)).substr(-3)));