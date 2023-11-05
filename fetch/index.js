const express = require("express");
const bodyParser = require("body-parser");
const json = require("body-parser/lib/types/json");

const app = express();

app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

// Endpoint test

app.get("/film", async (req, res) => {
    try {
        const response = await fetch("https://api.tvmaze.com/shows");
        const ambil = await response.json();
        res.json(ambil)
    } catch (error) {
        console.log(error.message('error fetching data'))
    }
});

const port = 5000;
app.listen(port, () => {
  console.log(`Server berjalan di port ${port}`);
});
