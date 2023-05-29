import React from "react";
import "./Contacts.css";
import {
  MdCall,
  MdEmail,
  MdMail,
  MdMessage,
  MdVideoCall,
} from "react-icons/md";
import { BsFillChatDotsFill } from "react-icons/bs";
import { HiChatBubbleBottomCenter } from "react-icons/hi2";

const Contacts = () => {
  return (
    <section className="contact-wrapper">
      <div className=" paddings innerWidth flexCenter contact-container">
        {/* left side */}
        <div className=" flexColCenter contact-left">
          <div className="felxColCenter contactModes">
            <div className="flexColStart contactTitleSection">
              <span className=" greenText">Our Contacts</span>
              <span className=" primaryText">Easy To Contact Us</span>
              <span className=" secondaryGreenText">
                with our 24x7 Available Services You can contact us Anywhere and
                Anytime
              </span>
            </div>
            {/* first row */}
            <div className=" flexStart row">
              <div className="flexColStart mode">
                <div className="flexStart ">
                  <div className=" flexCenter c-icon">
                    <MdCall/>
                  </div>
                  <div className="flexColStart detail">
                    <span className=" primaryText">Call</span>
                    <span>012 012 323 123</span>
                  </div>
                </div>
                <div className="flexCenter button ">Call Now</div>
              </div>
              {/* {second mode} */}
              <div className="flexColStart mode">
                <div className="flexStart ">
                  <div className=" flexCenter c-icon">
                    <BsFillChatDotsFill/>
                  </div>
                  <div className="flexColStart detail">
                    <span className=" primaryText">Chat</span>
                    <span>012 012 323 123</span>
                  </div>
                </div>
                <div className="flexCenter button ">Chat Now</div>
              </div>
            </div>
            {/* {second column} */}
            <div className=" flexStart row">
              <div className="flexColStart mode">
                <div className="flexStart ">
                  <div className=" flexCenter c-icon">
                    <MdVideoCall/>
                  </div>
                  <div className="flexColStart detail">
                    <span className=" primaryText">Video Call</span>
                    <span>012 012 323 123</span>
                  </div>
                </div>
                <div className="flexCenter button ">Video Call Now</div>
              </div>
              {/* {second mode} */}
              <div className="flexColStart mode">
                <div className="flexStart ">
                  <div className=" flexCenter c-icon">
                    <MdMail/>
                  </div>
                  <div className="flexColStart detail">
                    <span className=" primaryText">Mesage</span>
                    <span>012 012 323 123</span>
                  </div>
                </div>
                <div className="flexCenter button ">Mesage Now</div>
              </div>
            </div>
          </div>
        </div>
        {/* right side */}
        <div className=" flexColCenter contact-right">
          <img src="./contact.jpg" className="image-container" />
        </div>
      </div>
    </section>
  );
};

export default Contacts;
