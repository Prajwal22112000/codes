import React from "react";
import "./GetStarted.css";
const GetStarted = () => {
  return (
    <section className="gs-wrapper">
      <div className=" paddings innerWidth gs-container">
        <div className=" flexColCenter inner-gs-container">
          <span className="primaryText">Get Started with NEGI'S</span>
          <span className="secondaryGreenText">
            Subscribe and find out attractive price quotes form us
            <br />
            Find Your residence soon
          </span>
          <button className="gs-button greenText">
            <a href="mailto:negiprajwal22@gmail.com">Get Started</a>
          </button>
        </div>
      </div>
    </section>
  );
};

export default GetStarted;
