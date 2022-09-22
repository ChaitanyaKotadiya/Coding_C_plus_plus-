import { Computer } from './computer.js'
class Macbook extends Computer {
    constructor(name, compny) {
        super(name);
        this.compny = compny;
    }

    logIn() {
        console.log("you are loogged into a macbook " + this.name)
    }
}
const macbook_air = new Macbook('Air', 'Apple')
macbook_air.logIn()
macbook_air.run()
